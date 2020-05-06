#ifndef PLAYER_2_H
#define PLAYER_2_H

#include <QDialog>

namespace Ui {
class player_2;
}

class player_2 : public QDialog
{
    Q_OBJECT

public:
    explicit player_2(QWidget *parent = nullptr);
    ~player_2();

private slots:
    void on_GoButton_clicked();

    void on_ExitButton_clicked();

    void on_MoreGameButton_clicked();

private:
    Ui::player_2 *ui;
};

#endif // PLAYER_2_H
