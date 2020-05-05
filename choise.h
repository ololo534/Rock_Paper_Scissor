#ifndef CHOISE_H
#define CHOISE_H

#include <QDialog>
#include <QVector>
#include <QString>

namespace Ui {
class Choise;
}

class Choise : public QDialog
{
    Q_OBJECT

public:
    explicit Choise(QWidget *parent = nullptr);
    ~Choise();
    size_t countDraw{ 0 };
    size_t countComputerWins{ 0 };
    size_t countPlayerWins{ 0 };

    enum Moves { ROCK, SCISSORS, PAPER };

    QVector<Moves> computerMoves {ROCK, PAPER, SCISSORS};

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
