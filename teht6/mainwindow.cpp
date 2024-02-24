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

void MainWindow::on_btnCount_clicked()
{
    number++;
    ui->textNumber->setText(QString::number(number));
}


void MainWindow::on_btnReset_clicked()
{
    number = 0;
    ui->textNumber->setText(QString::number(number));
}

