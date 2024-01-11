#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

extern "C"{
#include "../s21_smart_calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    char* maindata;
    char* x_input;


private slots:
    void numbers();
    void AC();
    void bi_operator();
    int search_type(Ui::MainWindow *ui);
    void search_staple();
    void search_dot();
    void unar_operator();

 void on_pushButton_result_clicked();

private:
    Ui::MainWindow *ui;
    int staple_counter;
    int dot_flag;
};
#endif // MAINWINDOW_H
