#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_zeroButton_clicked();

    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_multiButton_clicked();

    void on_divButton_clicked();

    void on_resultButton_clicked();

    void on_pointButton_clicked();

    void on_delButton_clicked();

    void on_clearButotn_clicked();

    void on_changeSignButton_clicked();

private:
    QString number1 = "", number2 = "";
    QChar s;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
