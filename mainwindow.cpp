#include "mainwindow.h"
#include "ui_mainwindow.h"

QString getString();

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

int count=0;

void MainWindow::on_pushButton_clicked()
{
    count++;
    ui->label->setText(getString());
}

void MainWindow::on_pushButton_2_clicked()
{
    count=0;
    ui->label->setText(getString());
}

QString getString ()
{
    return "button clicked " + QString::number(count) + " times.";
}
