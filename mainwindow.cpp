#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "choise.h"
#include "pregamechoiseandrules.h"

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


void MainWindow::on_startButton_clicked() {
    MainWindow::hide();
    pregame.show();
}
