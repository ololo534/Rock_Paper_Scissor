#include "player_2.h"
#include "ui_player_2.h"
#include "player_1.h"
#include "QMessageBox"
#include <QDebug>
#include "pregamechoiseandrules.h"
#include "choise.h"

player_2::player_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::player_2)
{
    ui->setupUi(this);
}

player_2::~player_2()
{
    delete ui;
}

void player_2::on_GoButton_clicked() {
    Choise *ch = new Choise;
    player_2Move = 3;
    if ( ui->RockButton->isChecked() ) {
        player_2Move = 0;
    }
    if ( ui->ScissorsButton->isChecked() ) {
        player_2Move = 1;
    }
    if ( ui->PaperButton->isChecked() ) {
        player_2Move = 2;
    }
    //Проверка ввода
     if (player_2Move < 0 || player_2Move > 2) {
         QMessageBox msg(QMessageBox::Critical,"Error","You haven't choisen anithing!" , QMessageBox::Yes, nullptr);
         msg.exec();
         goto m1;
    }
    short result = (player_2Move - player_1Move) % 3;
    switch (result < 0 ? result + 3 : result) {
    case 0:{
        QMessageBox msg(QMessageBox::Information,"Info","Draw\nPlayer 1 choise: " + ch->nameMoves.at(player_1Move)
                        + "\nPlayer 2 choise: "+ ch->nameMoves.at(player_2Move), QMessageBox::Yes, nullptr);
        msg.exec();
        break;
    }
    case 1:{
        QMessageBox msg(QMessageBox::Information,"Info","Win Player 2\nPlayer 1 choise: " + ch->nameMoves.at(player_1Move)
                        + "\nPlayer 2 choise: "+ ch->nameMoves.at(player_2Move), QMessageBox::Yes, nullptr);
        msg.exec();
        ++ Player1WinCount;
        break;
    }
    case 2:{
        QMessageBox msg(QMessageBox::Information,"Info","Win Player 1\nPlayer 1 choise: " + ch->nameMoves.at(player_1Move)
                        + "\nPlayer 2 choise: "+ ch->nameMoves.at(player_2Move), QMessageBox::Ok, nullptr);
        msg.exec();
        ++ Player2WinCount;
        break;
    }
    }
    ui->GoButton->hide();
    //показ формы для 1 игрока
    m1:;
}

void player_2::on_ExitButton_clicked() {
    //Вывод статистики
    QMessageBox msg(QMessageBox::Information,"Statistics",
                    "Your statistics: \nPlayer 1 win: " + QString::number(Player1WinCount) +
                    " times\nPlayer 2 win: " + QString::number(Player2WinCount) + " times",
                    QMessageBox::Ok, nullptr);
    msg.exec();
    Player1WinCount = 0;
    Player2WinCount = 0;
    ui->GoButton->show();
    //показ формы выбора типа игры
    this->hide();
    pregamechoiseandrules *pregame = new pregamechoiseandrules;
    pregame->show();
}

void player_2::on_MoreGameButton_clicked()
{
    ui->GoButton->show();
    this->hide();
    player_1 *pl1 = new player_1;
    pl1->show();
}
