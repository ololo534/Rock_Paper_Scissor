#include "choise.h"
#include "ui_choise.h"
#include "QMessageBox"
#include <QDebug>

Choise::Choise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Choise)
{
    ui->setupUi(this);
}

Choise::~Choise()
{
    delete ui;
}

void Choise::on_GoButton_clicked() {
    //Выбор элемета компьютера
    int i = qrand() % ((3 + 0) - 0) + 0;

    //Выбор человеком
    if ( ui->RockButton->isChecked() ) {
        personMove = 1;
    }
    if ( ui->ScissorsButton->isChecked() ) {
        personMove = 2;
    }
    if ( ui->PaperButton->isChecked() ) {
        personMove = 3;
    }
     if (personMove < 1 || personMove > 3) {
         QMessageBox msg(QMessageBox::Critical,"Error","You haven't choisen anithing!" , QMessageBox::Ok, nullptr);
         msg.exec();
         goto m1;
     }
    computerMove = computerMoves.at(i);
    --personMove;

    //определение результата
    short result = (computerMove - personMove) % 3;

    //Вывод результата
    switch (result < 0 ? result + 3 : result) {
    case 0:{
        QMessageBox msg(QMessageBox::Information,"Info","Draw\nYour choise: " + nameMoves.at(personMove)
                        + "\nComputer choise: "+ nameMoves.at(computerMove), QMessageBox::Ok, nullptr);
        msg.exec();
        ++countDraw;
        break;
    }
    case 1:{
        QMessageBox msg(QMessageBox::Information,"Info","Win\nYour choise: " + nameMoves.at(personMove)
                        + "\nComputer choise: "+ nameMoves.at(computerMove), QMessageBox::Ok, nullptr);
        msg.exec();
        ++countPlayerWins;
        break;
    }
    case 2:{
        QMessageBox msg(QMessageBox::Information,"Info","Lose\nYour choise: " + nameMoves.at(personMove)
                        + "\nComputer choise: "+ nameMoves.at(computerMove), QMessageBox::Ok, nullptr);
        msg.exec();
        ++countComputerWins;
        break;
    }
    m1:;
    }
}

void Choise::on_ExitButton_clicked() {
    //Вывод статистики
    QMessageBox msg(QMessageBox::Information,"Statistics",
                    "Your statistics: \nComputer win: " + QString::number(countComputerWins) +
                    " times\nYou win: " + QString::number(countPlayerWins) +
                    " times\nDraw: " + QString::number(countDraw) + " times",
                    QMessageBox::Ok, nullptr);
    msg.exec();

}
