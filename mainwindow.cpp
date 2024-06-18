#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void Error(){

}

void MainWindow::on_zeroButton_clicked()
{
    if (number1.isEmpty() || number1[0] != '0'){
        number1 += '0';
        ui->label->setText(number1);
    }
}


void MainWindow::on_oneButton_clicked()
{
    number1 += '1';
    ui->label->setText(number1);
}


void MainWindow::on_twoButton_clicked()
{
    number1 += '2';
    ui->label->setText(number1);
}


void MainWindow::on_threeButton_clicked()
{
    number1 += '3';
    ui->label->setText(number1);
}


void MainWindow::on_fourButton_clicked()
{
    number1 += '4';
    ui->label->setText(number1);
}


void MainWindow::on_fiveButton_clicked()
{
   number1 += '5';
    ui->label->setText(number1);
}


void MainWindow::on_sixButton_clicked()
{
    number1 += '6';
    ui->label->setText(number1);
}


void MainWindow::on_sevenButton_clicked()
{
    number1 += '7';
    ui->label->setText(number1);
}


void MainWindow::on_eightButton_clicked()
{
    number1 += '8';
    ui->label->setText(number1);
}


void MainWindow::on_nineButton_clicked()
{
    number1 += '9';
    ui->label->setText(number1);
}

void Operation(Ui::MainWindow &ui, QString& number1, QString& number2, QChar& s){
    number2 = number1;
    number1.clear();
    ui.label_2->setText(number2 + ' ' + s);
    ui.label->setText("");
}

bool Check(QString& number1){
    if (!number1.isEmpty() && number1.back() != '.') return 1;
    else return 0;
}

void MainWindow::on_plusButton_clicked()
{
    if (Check(number1)){
        s = '+';
        Operation(*ui, number1, number2, s);
    }
}


void MainWindow::on_minusButton_clicked()
{
    if (Check(number1)){
        s = '-';
        Operation(*ui, number1, number2, s);
    }
}


void MainWindow::on_multiButton_clicked()
{
    if (Check(number1)){
        s = '*';
        Operation(*ui, number1, number2, s);
    }
}


void MainWindow::on_divButton_clicked()
{
    if (Check(number1)){
        s = '/';
        Operation(*ui, number1, number2, s);
    }
}


void MainWindow::on_resultButton_clicked()
{
    if (Check(number1)){
        double res = 0;
        if (s == '+')
            res = number2.toDouble() + number1.toDouble();
        else if (s == '-')
            res = number2.toDouble() - number1.toDouble();
        else if (s == '*')
            res = number2.toDouble() * number1.toDouble();
        else if (s == '/')
            res = number2.toDouble() / number1.toDouble();
        ui->label_2->setText(number2 + ' ' + s + ' ' + number1 + " =");
        number1 = QString::number(res);
        ui->label->setText(number1);

    }
}


void MainWindow::on_pointButton_clicked()
{
    number1 += '.';
    ui->label->setText(number1);
}


void MainWindow::on_delButton_clicked()
{
    if (!number1.isEmpty()){
        number1.chop(1);
        ui->label->setText(number1);
    }
}


void MainWindow::on_clearButotn_clicked()
{
    ui->label->clear();
    ui->label_2->clear();
    number1.clear();
    number2.clear();
}


void MainWindow::on_changeSignButton_clicked()
{
    if (Check(number1)){
        if (number1.front() != '-') number1 = '-' + number1;
        else number1.remove(0, 1);
        ui->label->setText(number1);
    }
}

