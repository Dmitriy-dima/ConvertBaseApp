#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_translateButton_clicked();
    void on_exitButton_clicked();
    void on_labelColorButton_clicked();

private:
    void loadSettings();
    void saveSettings();
    QString convertNumber(int fromBase, int toBase, const QString &number);

    QColor labelColor;

    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
