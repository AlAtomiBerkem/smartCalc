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


    void on_radioButton_DIFF_clicked();

     void on_radioButton_ANN_clicked();

     void on_pushButton_clicked();

     void on_pushButton_10_clicked();

     void on_radioButton_clicked();

     void on_radioButton_2_clicked();

private:
    Ui::MainWindow *ui;
    int staple_counter;
    int dot_flag;
    int credit_active = 0;
    int depos_active = 0;
    capitalization_type type_cap = OFF;
    QVector<QString> arr_string;
    creadit_type type = DIFF;
};
#endif // MAINWINDOW_H
