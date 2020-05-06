#include "player_1.h"
#include "ui_player_1.h"
#include "QMessageBox"
#include "player_2.h"
#include "QDebug"
#include "choise.h"

player_1::player_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::player_1)
{
    ui->setupUi(this);
}

player_1::~player_1()
{
    delete ui;
}

void player_1::on_NextButton_clicked()
{
    player_1Move = 3;

    if ( ui->RockButton->isChecked() ) {
        player_1Move = 0;
    }
    if ( ui->ScissorsButton->isChecked() ) {
        player_1Move = 1;
    }
    if ( ui->PaperButton->isChecked() ) {
        player_1Move = 2;
    }
    if (player_1Move < 0 || player_1Move > 2) {
        QMessageBox msg(QMessageBox::Critical,"Error","You haven't choisen anithing!" , QMessageBox::Ok, nullptr);
        msg.exec();
        goto m1;
    }
    qDebug() << QString::number(player_1Move);
    this->hide();
    player_2 *pl2 = new player_2;
    pl2->show();
    m1:;
}
