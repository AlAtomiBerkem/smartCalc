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


void MainWindow::on_pushButton_result_clicked()
{
    QByteArray main_display = ui->result_show ->toPlainText().toLocal8Bit();
    QByteArray x_display = ui->x_input ->text().toLocal8Bit();
    maindata = main_display.data();
    x_input = x_display.data();
    double result = 0;

    int return_code = smart_calc(maindata, x_input, &result);

    if(return_code == 1) {
        ui->result_show->setPlainText("Ты криворукий");

    }
    else if (result == INFINITY || result == -INFINITY || std::isnan(result)) {
        ui->result_show->setPlainText("Calculation error");
 } else {
        QString result_string = QString::number(result);
        ui->result_show->setPlainText(result_string);
    }



    void MainWindow::on_radioButton_DIFF_clicked() { type = DIFF; }

    void MainWindow::on_radioButton_ANN_clicked() { type = ANNUITY; }

    void MainWindow::on_pushButton_clicked() {
      ui->label_credit_over->setText("");
      ui->label_credit_total->setText("");
      ui->label_credit_max->setText("");
      ui->label_credit_min->setText("");
      ui->label_credit_diff->setText("");
      errors res = OK;
      double min = 0, max = 0, total = 0, over = 0;
      double *month_payment_min = &min, *month_payment_max = &max,
             *total_payment = &total, *over_payment = &over;
      res = credit_calc(ui->doubleSpinBox->value(), ui->doubleSpinBox_2->value(),
                        ui->doubleSpinBox_3->value(), type, month_payment_min,
                        month_payment_max, total_payment, over_payment);
      if (res == OK) {
        ui->label_credit_over->setText(QString::number(over, 'g', 10));
        ui->label_credit_total->setText(QString::number(total, 'g', 10));
        ui->label_credit_max->setText(QString::number(max, 'g', 10));
        ui->label_credit_min->setText(QString::number(min, 'g', 10));
        ui->label_credit_diff->setText(QString::number((max - min), 'g', 10));
      }
    }

    void MainWindow::on_pushButton_10_clicked() {
      ui->label_20->setText("");
      ui->label_21->setText("");
      ui->label_22->setText("");
      errors res = OK;
      payments_type pay_type = YEAR;
      deposit_t date = {0,   0,         0,         0,         YEAR,
                        OFF, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
      deposit_t *node = &date;
      node->summ = ui->doubleSpinBox_8->value();
      node->month = ui->doubleSpinBox_5->value();
      node->interest_rate = ui->doubleSpinBox_7->value();
      node->tax_rate = ui->doubleSpinBox_4->value();
      if (ui->comboBox->currentIndex() == 0) pay_type = YEAR;
      if (ui->comboBox->currentIndex() == 1) pay_type = HALF_YEAR;
      if (ui->comboBox->currentIndex() == 2) pay_type = QUARTER;
      if (ui->comboBox->currentIndex() == 3) pay_type = MONTH;
      node->payment_period = pay_type;
      node->dates_of_adding[0] = ui->doubleSpinBox_11->value();
      node->dates_of_adding[1] = ui->doubleSpinBox_13->value();
      node->dates_of_adding[2] = ui->doubleSpinBox_10->value();
      node->sizes_of_adding[0] = ui->doubleSpinBox_15->value();
      node->sizes_of_adding[1] = ui->doubleSpinBox_16->value();
      node->sizes_of_adding[2] = ui->doubleSpinBox_18->value();
      node->dates_of_remove[0] = ui->doubleSpinBox_12->value();
      node->dates_of_remove[1] = ui->doubleSpinBox_9->value();
      node->dates_of_remove[2] = ui->doubleSpinBox_14->value();
      node->size_of_remove[0] = ui->doubleSpinBox_17->value();
      node->size_of_remove[1] = ui->doubleSpinBox_19->value();
      node->size_of_remove[2] = ui->doubleSpinBox_20->value();
      node->capitalization = type_cap;
      double diff_v = 0, tax_sum_v = 0, final_sum_v = 0;
      double *diff = &diff_v, *tax_sum = &tax_sum_v, *final_sum = &final_sum_v;
      res = deposit_calc(node, diff, tax_sum, final_sum);
      if (res == OK) {
        ui->label_20->setText(QString::number(final_sum_v, 'g', 10));
        ui->label_21->setText(QString::number(tax_sum_v, 'g', 10));
        ui->label_22->setText(QString::number(diff_v, 'g', 10));
      }
    }

    void MainWindow::on_radioButton_clicked() { type_cap = OFF; }

    void MainWindow::on_radioButton_2_clicked() { type_cap = ON; }


}

