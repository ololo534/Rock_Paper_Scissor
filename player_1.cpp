#include "player_1.h"
#include "ui_player_1.h"
#include "QMessageBox"

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
    if ( ui->RockButton->isChecked() ) {
        player_1Move = 1;
    }
    if ( ui->ScissorsButton->isChecked() ) {
        player_1Move = 2;
    }
    if ( ui->PaperButton->isChecked() ) {
        player_1Move = 3;
    }
    if (player_1Move < 1 || player_1Move > 3) {
        QMessageBox msg(QMessageBox::Critical,"Error","You haven't choisen anithing!" , QMessageBox::Ok, nullptr);
        msg.exec();
        goto m1;
    }
    player_1::hide();
    m1:;
}
