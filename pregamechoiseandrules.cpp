#include "pregamechoiseandrules.h"
#include "ui_pregamechoiseandrules.h"
#include "choise.h"
#include "mainwindow.h"

pregamechoiseandrules::pregamechoiseandrules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pregamechoiseandrules),
    gif_movie(QCoreApplication::applicationDirPath() + "/gif_RPS.webp")

{
    ui->setupUi(this);
    ui->lbMovie->setMovie( &gif_movie );
    gif_movie.start();

}

pregamechoiseandrules::~pregamechoiseandrules()
{
    delete ui;
}

//Выход из приложения
void pregamechoiseandrules::on_pushButton_4_clicked()
{
    close();
}
// Игра с компьютером
void pregamechoiseandrules::on_pushButton_2_clicked()
{
    pregamechoiseandrules::hide();
    choise.show();
}
//Игра вдвоем
void pregamechoiseandrules::on_pushButton_clicked()
{
    pregamechoiseandrules::hide();
    pl1.show();
}
