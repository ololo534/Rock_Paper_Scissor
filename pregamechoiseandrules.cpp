#include "pregamechoiseandrules.h"
#include "ui_pregamechoiseandrules.h"
#include "choise.h"

pregamechoiseandrules::pregamechoiseandrules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pregamechoiseandrules),
    gif_movie("C:\\Qt\\Project\\RPS/gif_RPS.gif.webp")

{
    ui->setupUi(this);
    ui->lbMovie->setMovie( &gif_movie );
    gif_movie.start();

}

pregamechoiseandrules::~pregamechoiseandrules()
{
    delete ui;
}


void pregamechoiseandrules::on_pushButton_4_clicked()
{
    close();
}

void pregamechoiseandrules::on_pushButton_2_clicked()
{
    pregamechoiseandrules::hide();
    choise.show();
}
