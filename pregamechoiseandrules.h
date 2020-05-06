#ifndef PREGAMECHOISEANDRULES_H
#define PREGAMECHOISEANDRULES_H

#include <QMainWindow>
#include <QMovie>
#include <choise.h>

namespace Ui {
class pregamechoiseandrules;
}

class pregamechoiseandrules : public QMainWindow
{
    Q_OBJECT

public:
    explicit pregamechoiseandrules(QWidget *parent = nullptr);
    ~pregamechoiseandrules();
    Choise choise;

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::pregamechoiseandrules *ui;

    QMovie gif_movie;
};

#endif // PREGAMECHOISEANDRULES_H
