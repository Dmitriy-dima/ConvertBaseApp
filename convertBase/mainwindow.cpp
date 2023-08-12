#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSettings>
#include <QMessageBox>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadSettings();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_exitButton_clicked() //Функция по закрыванию программы при клике на кнопку
{
    if(ui->saveSettingsCheckBox->isChecked()) {
        saveSettings();
    }
    QApplication::quit();
}

void MainWindow::on_labelColorButton_clicked() // Функция измеенения цвета текста над полями
{
    QColor color = QColorDialog::getColor(labelColor, this);
    if(color.isValid()) {
        labelColor = color;
        ui->inputLabel->setStyleSheet("color: " + color.name());
        ui->outputLabel->setStyleSheet("color: " + color.name());
        ui->outputLabel_2->setStyleSheet("color: " + color.name());
    }
    if(ui->saveSettingsCheckBox->isChecked()) {
        saveSettings();
    }
}

void MainWindow::on_translateButton_clicked() //Функция по нажатию кнопки конвертации, запускает функцию convertNumber, которая и производит вычисления
{
    QString number = ui->inputLineEdit->text();
    int inputBase = ui->inputComboBox->currentText().toInt();
    bool ok;
    int outputBase = ui->outputBaseLineEdit->text().toInt(&ok);

    if (!ok || outputBase < 2) {
        QMessageBox::warning(this, "Недопустимая СС", "Пожалуйста, введите действительное целое число больше 1 для СС.");
        return;
    }

    QString convertedNumber;
    try {
        convertedNumber = convertNumber(inputBase, outputBase, number);
    } catch (const std::invalid_argument&) {
        QMessageBox::warning(this, "Ошибка конвертации", "Недопустимая цифра для выбранной системы счисления.");
        return;
    }

    ui->outputLineEdit->setText(convertedNumber);
}

void MainWindow::loadSettings()
{
    QSettings settings("YourCompany", "YourApp");

    // Загрузка последней использованной СС.
    ui->inputComboBox->setCurrentText(settings.value("inputBase", 10).toString());
    ui->outputBaseLineEdit->setText(settings.value("outputBase", "10").toString());

    // Загрузка настроек цвета.
    labelColor.setNamedColor(settings.value("labelColor", "#000000").toString());

    ui->inputLabel->setStyleSheet("color: " + labelColor.name());
    ui->outputLabel->setStyleSheet("color: " + labelColor.name());
    ui->outputLabel_2->setStyleSheet("color: " + labelColor.name());

    // Загрузка сохранение настроек состояние.
    ui->saveSettingsCheckBox->setChecked(settings.value("saveSettings", true).toBool());
}



void MainWindow::saveSettings()
{
    QSettings settings("YourCompany", "YourApp");

    // Сохранить выбранные в данный момент СС.
    settings.setValue("inputBase", ui->inputComboBox->currentText());
    settings.setValue("outputBase", ui->outputBaseLineEdit->text());

    // Сохранить настройки цвета.
    settings.setValue("labelColor", labelColor.name());

    // Сохранить состояние сохранения настроек. То есть чекбокса, но в принципе бесполезная часть кода, потому что чекбокс по умолчанию стоит как отмеченный.
    settings.setValue("saveSettings", ui->saveSettingsCheckBox->isChecked());
}

QString MainWindow::convertNumber(int fromBase, int toBase, const QString &number) //Да, за результаты отвечает эта функция
{
    bool ok; //Переменная ok объявлена как булево значение для отслеживания успешности преобразования входного числа в qint64 (64-битное знаковое целое число)
    qint64 value = number.toLongLong(&ok, fromBase); //преобразует входное число в значение qint64 с помощью функции toLongLong класса QString. Именно это позволяет преобразовывать число в разные СС.
    if (!ok) throw std::invalid_argument("Недопустимая цифра для выбранной системы исчисления.");

    QString result = QString::number(value, toBase); // преобразует значение в QString, используя статическую функцию-член number класса QString. Параметр toBase указывает СС, в которое должно быть преобразовано число.

    return result.toUpper();
}
