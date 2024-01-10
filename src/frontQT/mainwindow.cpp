#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    staple_counter = 0;
    dot_flag = 0;

    connect (ui -> pushButton_0, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_1, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_2, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_3, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_4, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_5, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_6, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_7, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_8, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_9, SIGNAL(clicked()), this, SLOT(numbers()));
    connect (ui -> pushButton_X, SIGNAL(clicked()), this, SLOT(numbers()));

    connect (ui -> pushButton_AC, SIGNAL(clicked()), this, SLOT(AC()));
    connect (ui -> pushButton_DOT, SIGNAL(clicked()), this, SLOT(search_dot()));

    connect (ui -> pushButton_PLUS, SIGNAL(clicked()), this, SLOT(bi_operator()));
    connect (ui -> pushButton_MINUS, SIGNAL(clicked()), this, SLOT(bi_operator()));
    connect (ui -> pushButton_UMN, SIGNAL(clicked()), this, SLOT(bi_operator()));
    connect (ui -> pushButton_DEL, SIGNAL(clicked()), this, SLOT(bi_operator()));
    connect (ui -> pushButton_MOD, SIGNAL(clicked()), this, SLOT(bi_operator()));
    connect (ui -> pushButton_POW, SIGNAL(clicked()), this, SLOT(bi_operator()));

    connect (ui -> pushButton_BKT_LEFT, SIGNAL(clicked()), this, SLOT(search_staple()));
    connect (ui -> pushButton_BKT_RIGHT, SIGNAL(clicked()), this, SLOT(search_staple()));

    connect (ui -> pushButton_SIN, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_COS, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_TAN, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_ASIN, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_ACOS, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_ATAN, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_SQRT, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_LN, SIGNAL(clicked()), this, SLOT(unar_operator()));
    connect (ui -> pushButton_LOG, SIGNAL(clicked()), this, SLOT(unar_operator()));

}

void MainWindow::numbers(){
        QString temp_line = ui ->result_show->toPlainText();
        QPushButton *temp_button = (QPushButton*)sender();
        if (!(ui->result_show->toPlainText().endsWith(")") || ui->result_show->toPlainText().endsWith("X")) &&
                ((temp_button->text() == "X" && search_type(ui) != 2) || temp_button->text() != "X")){

        temp_line = temp_line + temp_button->text();
        ui -> result_show -> setText(temp_line);
        ui->result_show->setAlignment(Qt::AlignRight);
        }

}

void MainWindow::bi_operator(){
    QString temp_line = ui ->result_show->toPlainText();
    QPushButton *temp_button = (QPushButton*)sender();
    if (temp_button->text() == "-" && (search_type(ui) == 1 ||  ui->result_show->toPlainText().endsWith("("))) {
        temp_line = temp_line + temp_button->text();
        dot_flag = 0;
        ui -> result_show -> setText(temp_line);
        ui->result_show->setAlignment(Qt::AlignRight);
    }else
    if (search_type(ui) == 2 || ui->result_show->toPlainText().endsWith(")")){
    temp_line = temp_line + temp_button->text();
    dot_flag = 0;
    ui -> result_show -> setText(temp_line);
    ui->result_show->setAlignment(Qt::AlignRight);
    }
}

void MainWindow::AC() {
    QString temp_line = "";
    ui -> result_show -> setText(temp_line);
    ui->result_show->setAlignment(Qt::AlignRight);

}

void MainWindow::search_staple(){
    QString temp_line = ui ->result_show->toPlainText();
    QPushButton *temp_button = (QPushButton*)sender();

    if(temp_button->text() == "(" && (search_type(ui) == 1 || search_type(ui) == 3 || ui->result_show->toPlainText().endsWith("("))) {
        staple_counter +=1;
        dot_flag = 0;
        temp_line = temp_line + temp_button->text();
        ui -> result_show -> setText(temp_line);
        ui->result_show->setAlignment(Qt::AlignRight);
    } else if (temp_button->text() == ")" && (search_type(ui) == 2 || ui->result_show->toPlainText().endsWith(")")) && staple_counter > 0 ){
        staple_counter -=1;
        dot_flag = 0;
        temp_line = temp_line + temp_button->text();
        ui -> result_show -> setText(temp_line);
        ui->result_show->setAlignment(Qt::AlignRight);
    }
}

void MainWindow::search_dot() {
    QString temp_line = ui ->result_show->toPlainText();
    QPushButton *temp_button = (QPushButton*)sender();
    if ( dot_flag != 1 && search_type(ui) == 2 && !ui->result_show->toPlainText().endsWith("X")){
        dot_flag = 1;
            temp_line = temp_line + temp_button->text();
            ui -> result_show -> setText(temp_line);
            ui->result_show->setAlignment(Qt::AlignRight);
}
}

void MainWindow::unar_operator() {
    QString temp_line = ui ->result_show->toPlainText();
    QPushButton *temp_button = (QPushButton*)sender();
     if (!(ui->result_show->toPlainText().endsWith(")") || ui->result_show->toPlainText().endsWith("X"))){
         temp_line = temp_line + temp_button->text() + "(";
         ui -> result_show -> setText(temp_line);
         ui->result_show->setAlignment(Qt::AlignRight);
         dot_flag = 0;
         staple_counter +=1;
     }
}

int MainWindow::search_type(Ui::MainWindow *ui) {
    int result = 0;
    if (ui->result_show->toPlainText() == "") result = 1;
    else if (ui->result_show->toPlainText().endsWith("0") || ui->result_show->toPlainText().endsWith("1") || ui->result_show->toPlainText().endsWith("2") || ui->result_show->toPlainText().endsWith("3")
              || ui->result_show->toPlainText().endsWith("4") || ui->result_show->toPlainText().endsWith("5") || ui->result_show->toPlainText().endsWith("6") || ui->result_show->toPlainText().endsWith("7")
             || ui->result_show->toPlainText().endsWith("8") || ui->result_show->toPlainText().endsWith("9") || ui->result_show->toPlainText().endsWith("X") ) result = 2;
    else if (ui->result_show->toPlainText().endsWith("+") || ui->result_show->toPlainText().endsWith("-") || ui->result_show->toPlainText().endsWith("*") || ui->result_show->toPlainText().endsWith("/")
             || ui->result_show->toPlainText().endsWith("mod") || ui->result_show->toPlainText().endsWith("^")) result = 3;
    return result;
}

MainWindow::~MainWindow()
{
    delete ui;
}

