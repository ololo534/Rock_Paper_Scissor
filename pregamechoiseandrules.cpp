#include "pregamechoiseandrules.h"
#include "ui_pregamechoiseandrules.h"
#include "choise.h"

pregamechoiseandrules::pregamechoiseandrules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pregamechoiseandrules),
    gif_movie("D:/OneDrive/Desktop/qt_projects/RPS1/PRS/Rock_Paper_Scissors/gif_RPS.gif")

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
