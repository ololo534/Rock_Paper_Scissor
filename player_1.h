#ifndef PLAYER_1_H
#define PLAYER_1_H

#include <QDialog>

namespace Ui {
class player_1;
}

class player_1 : public QDialog
{
    Q_OBJECT

public:
    explicit player_1(QWidget *parent = nullptr);
    ~player_1();
    int player_1Move = 0;
private slots:
    void on_NextButton_clicked();

private:
    Ui::player_1 *ui;
};

#endif // PLAYER_1_H
