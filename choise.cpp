#include "choise.h"
#include "ui_choise.h"
#include "QMessageBox"

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
    if ( ui->RockButton->isChecked() ) {
        QMessageBox msg(QMessageBox::Information,"Info","Your choice: Rock", QMessageBox::Ok, nullptr);
        msg.exec();
    }
    if ( ui->PaperButton->isChecked() ) {
        QMessageBox msg(QMessageBox::Information,"Info","Your choice: Paper", QMessageBox::Ok, nullptr);
        msg.exec();
    }
    if ( ui->ScissorsButton->isChecked() ) {
        QMessageBox msg(QMessageBox::Information,"Info","Your choice: Scissors", QMessageBox::Ok, nullptr);
        msg.exec();
    }
}

void Choise::on_ExitButton_clicked() {
    QMessageBox msg(QMessageBox::Information,"Statistics","Ваша статистика: ", QMessageBox::Ok, nullptr);
    msg.exec();
    Choise::hide();
}
