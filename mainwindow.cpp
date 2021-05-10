#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_pushButton_clicked()
{
    int timestamp = std::chrono::duration_cast< std::chrono::milliseconds >(
        std::chrono::system_clock::now().time_since_epoch()).count();
    ui->tabWidget->addTab(new Form(this, timestamp), QString("Tab %0").arg(ui->tabWidget->count() + 1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
}
