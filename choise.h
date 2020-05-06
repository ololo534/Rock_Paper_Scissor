#ifndef CHOISE_H
#define CHOISE_H

#include <QDialog>
#include <QVector>
#include <QString>

extern short player_1Move;
extern short player_2Move;
extern int Player1WinCount;
extern int Player2WinCount;

namespace Ui {
class Choise;
}

class Choise : public QDialog
{
    Q_OBJECT

public:
    explicit Choise(QWidget *parent = nullptr);
    ~Choise();
    int countDraw{ 0 };
    int countComputerWins{ 0 };
    int countPlayerWins{ 0 };

    enum Moves { ROCK, SCISSORS, PAPER };

    QVector<Moves> computerMoves {ROCK, SCISSORS, PAPER};

    QVector<QString> nameMoves{ "Rock", "Scissors", "Paper" };

    short personMove{ 0 };
    short computerMove{ 0 };

private slots:
    void on_ExitButton_clicked();

    void on_GoButton_clicked();

private:
    Ui::Choise *ui;
};

#endif // CHOISE_H
