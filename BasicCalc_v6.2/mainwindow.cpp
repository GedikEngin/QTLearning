#include "mainwindow.h"
#include "ui_mainwindow.h"

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

// text box variables

int firstNum, secondNum, result;

void MainWindow::on_addition_clicked() // from using go to slot from ui menu
{
    firstNum = ui->num1input->text().toInt(); // assigning the ui value inside num1input, to be converted from text to string and assigned to first num
    secondNum = ui->num2input->text().toInt(); // repeat of above
    result = firstNum + secondNum; // the sum of the 2 numbers
    ui -> resultBox -> setText(QString::number(result)); // sets text inside result box, converted into a QString number type, and pushes it into the ui
}


void MainWindow::on_divide_clicked()
{
    firstNum = ui->num1input->text().toInt(); // assigning the ui value inside num1input, to be converted from text to string and assigned to first num
    secondNum = ui->num2input->text().toInt(); // repeat of above
    result = firstNum / secondNum; // the sum of the 2 numbers
    ui -> resultBox -> setText(QString::number(result));
}

void MainWindow::on_multiply_clicked()
{
    firstNum = ui->num1input->text().toInt(); // assigning the ui value inside num1input, to be converted from text to string and assigned to first num
    secondNum = ui->num2input->text().toInt(); // repeat of above
    result = firstNum * secondNum; // the sum of the 2 numbers
    ui -> resultBox -> setText(QString::number(result));
}


void MainWindow::on_minus_clicked()
{
    firstNum = ui->num1input->text().toInt(); // assigning the ui value inside num1input, to be converted from text to string and assigned to first num
    secondNum = ui->num2input->text().toInt(); // repeat of above
    result = firstNum - secondNum; // the sum of the 2 numbers
    ui -> resultBox -> setText(QString::number(result));
}

