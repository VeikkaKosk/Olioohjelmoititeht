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
    counter++;
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText("Painiketta Count painettu "+QString::number(counter)+" kertaa");
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta Count painettu 0 kertaa");
}

