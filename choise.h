#ifndef CHOISE_H
#define CHOISE_H

#include <QDialog>

namespace Ui {
class Choise;
}

class Choise : public QDialog
{
    Q_OBJECT

public:
    explicit Choise(QWidget *parent = nullptr);
    ~Choise();

private slots:
    void on_ExitButton_clicked();

    void on_GoButton_clicked();

private:
    Ui::Choise *ui;
};

#endif // CHOISE_H
