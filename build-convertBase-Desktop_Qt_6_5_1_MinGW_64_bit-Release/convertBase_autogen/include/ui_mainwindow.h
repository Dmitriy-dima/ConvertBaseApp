/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *ConverterTab;
    QSplitter *splitter;
    QLabel *inputLabel;
    QComboBox *inputComboBox;
    QLineEdit *inputLineEdit;
    QPushButton *translateButton;
    QLabel *outputLabel;
    QLineEdit *outputBaseLineEdit;
    QLabel *outputLabel_2;
    QLineEdit *outputLineEdit;
    QPushButton *exitButton;
    QWidget *SettingsTab;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *labelColorButton;
    QCheckBox *saveSettingsCheckBox;
    QMenuBar *menubar;
    QMenu *menuConvert_Bases_App;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 571));
        ConverterTab = new QWidget();
        ConverterTab->setObjectName("ConverterTab");
        splitter = new QSplitter(ConverterTab);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(210, 10, 331, 231));
        splitter->setOrientation(Qt::Vertical);
        inputLabel = new QLabel(splitter);
        inputLabel->setObjectName("inputLabel");
        splitter->addWidget(inputLabel);
        inputComboBox = new QComboBox(splitter);
        inputComboBox->addItem(QString());
        inputComboBox->addItem(QString());
        inputComboBox->addItem(QString());
        inputComboBox->addItem(QString());
        inputComboBox->setObjectName("inputComboBox");
        splitter->addWidget(inputComboBox);
        inputLineEdit = new QLineEdit(splitter);
        inputLineEdit->setObjectName("inputLineEdit");
        splitter->addWidget(inputLineEdit);
        translateButton = new QPushButton(splitter);
        translateButton->setObjectName("translateButton");
        splitter->addWidget(translateButton);
        outputLabel = new QLabel(splitter);
        outputLabel->setObjectName("outputLabel");
        splitter->addWidget(outputLabel);
        outputBaseLineEdit = new QLineEdit(splitter);
        outputBaseLineEdit->setObjectName("outputBaseLineEdit");
        splitter->addWidget(outputBaseLineEdit);
        outputLabel_2 = new QLabel(splitter);
        outputLabel_2->setObjectName("outputLabel_2");
        splitter->addWidget(outputLabel_2);
        outputLineEdit = new QLineEdit(splitter);
        outputLineEdit->setObjectName("outputLineEdit");
        splitter->addWidget(outputLineEdit);
        exitButton = new QPushButton(ConverterTab);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(350, 460, 80, 24));
        tabWidget->addTab(ConverterTab, QString());
        SettingsTab = new QWidget();
        SettingsTab->setObjectName("SettingsTab");
        widget = new QWidget(SettingsTab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 20, 151, 151));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelColorButton = new QPushButton(widget);
        labelColorButton->setObjectName("labelColorButton");

        verticalLayout_3->addWidget(labelColorButton);

        saveSettingsCheckBox = new QCheckBox(widget);
        saveSettingsCheckBox->setObjectName("saveSettingsCheckBox");

        verticalLayout_3->addWidget(saveSettingsCheckBox);

        tabWidget->addTab(SettingsTab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuConvert_Bases_App = new QMenu(menubar);
        menuConvert_Bases_App->setObjectName("menuConvert_Bases_App");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuConvert_Bases_App->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        inputLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\270\321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \321\207\320\270\321\201\320\273\320\260 \320\272\320\276\320\275\320\262\320\265\321\200\321\202\320\260\321\206\320\270\320\270", nullptr));
        inputComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "2", nullptr));
        inputComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "8", nullptr));
        inputComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        inputComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "16", nullptr));

        translateButton->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        outputLabel->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\270\321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \320\262 \320\272\320\276\321\202\320\276\321\200\321\203\321\216 \320\262\321\213\320\262\320\276\320\264\320\270\321\202\321\214", nullptr));
        outputLabel_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\270\321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ConverterTab), QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\260\321\206\320\270\321\217", nullptr));
        labelColorButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\206\320\262\320\265\321\202\320\260 \321\202\320\265\320\272\321\201\321\202\320\260", nullptr));
        saveSettingsCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(SettingsTab), QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        menuConvert_Bases_App->setTitle(QCoreApplication::translate("MainWindow", "Convert Bases App", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
