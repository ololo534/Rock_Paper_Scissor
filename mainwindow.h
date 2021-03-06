#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <choise.h>
#include <pregamechoiseandrules.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Choise choise;
    pregamechoiseandrules pregame;
private slots:
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
