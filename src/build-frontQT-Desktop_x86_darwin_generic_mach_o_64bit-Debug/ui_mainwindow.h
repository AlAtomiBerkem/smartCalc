/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QTextEdit *result_show;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_PLUS;
    QPushButton *pushButton_5;
    QPushButton *pushButton_MINUS;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_UMN;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_DOT;
    QPushButton *pushButton_0;
    QPushButton *pushButton_SIN;
    QPushButton *pushButton_MOD;
    QPushButton *pushButton_SQRT;
    QPushButton *pushButton_TAN;
    QPushButton *pushButton_COS;
    QPushButton *pushButton_ACOS;
    QPushButton *pushButton_ASIN;
    QPushButton *pushButton_ATAN;
    QPushButton *pushButton_LOG;
    QPushButton *pushButton_BKT_RIGHT;
    QPushButton *pushButton_BKT_LEFT;
    QPushButton *pushButton_LN;
    QPushButton *pushButton_POW;
    QPushButton *pushButton_X;
    QPushButton *pushButton_4;
    QPushButton *pushButton_DEL;
    QPushButton *pushButton_AC;
    QCustomPlot *widget;
    QPushButton *pushButton_result;
    QWidget *deposit;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *doubleSpinBox_8;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_7;
    QDoubleSpinBox *doubleSpinBox_12;
    QDoubleSpinBox *doubleSpinBox_9;
    QDoubleSpinBox *doubleSpinBox_14;
    QDoubleSpinBox *doubleSpinBox_13;
    QDoubleSpinBox *doubleSpinBox_11;
    QDoubleSpinBox *doubleSpinBox_10;
    QDoubleSpinBox *doubleSpinBox_17;
    QDoubleSpinBox *doubleSpinBox_19;
    QDoubleSpinBox *doubleSpinBox_20;
    QDoubleSpinBox *doubleSpinBox_15;
    QDoubleSpinBox *doubleSpinBox_16;
    QDoubleSpinBox *doubleSpinBox_18;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *label_19;
    QPushButton *pushButton_10;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *widget_2;
    QLabel *label_23;
    QSplitter *splitter;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QWidget *credit;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *radio_widget;
    QRadioButton *radioButton_ANN;
    QRadioButton *radioButton_DIFF;
    QLabel *label_credit_sum;
    QLabel *label_credit_proc;
    QLabel *label_credit_time;
    QLabel *label_credit_diff;
    QLabel *label_credit_total;
    QLabel *label_credit_over;
    QLabel *label_credit_max;
    QLabel *label_credit_min;
    QPushButton *pushButton;
    QLineEdit *x_input;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1552, 872);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 90, 121, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        result_show = new QTextEdit(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(30, 10, 491, 71));
        QFont font;
        font.setPointSize(20);
        result_show->setFont(font);
        result_show->setLayoutDirection(Qt::RightToLeft);
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        result_show->setReadOnly(true);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(40, 90, 101, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 90, 121, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_PLUS = new QPushButton(centralwidget);
        pushButton_PLUS->setObjectName(QString::fromUtf8("pushButton_PLUS"));
        pushButton_PLUS->setGeometry(QRect(380, 90, 121, 61));
        pushButton_PLUS->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 150, 121, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_MINUS = new QPushButton(centralwidget);
        pushButton_MINUS->setObjectName(QString::fromUtf8("pushButton_MINUS"));
        pushButton_MINUS->setGeometry(QRect(380, 150, 121, 61));
        pushButton_MINUS->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(260, 150, 121, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(140, 210, 121, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_UMN = new QPushButton(centralwidget);
        pushButton_UMN->setObjectName(QString::fromUtf8("pushButton_UMN"));
        pushButton_UMN->setGeometry(QRect(380, 210, 121, 61));
        pushButton_UMN->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(260, 210, 121, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 210, 101, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_DOT = new QPushButton(centralwidget);
        pushButton_DOT->setObjectName(QString::fromUtf8("pushButton_DOT"));
        pushButton_DOT->setGeometry(QRect(40, 270, 101, 61));
        pushButton_DOT->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(140, 270, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_SIN = new QPushButton(centralwidget);
        pushButton_SIN->setObjectName(QString::fromUtf8("pushButton_SIN"));
        pushButton_SIN->setGeometry(QRect(140, 330, 121, 61));
        pushButton_SIN->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_MOD = new QPushButton(centralwidget);
        pushButton_MOD->setObjectName(QString::fromUtf8("pushButton_MOD"));
        pushButton_MOD->setGeometry(QRect(40, 510, 101, 61));
        pushButton_MOD->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_SQRT = new QPushButton(centralwidget);
        pushButton_SQRT->setObjectName(QString::fromUtf8("pushButton_SQRT"));
        pushButton_SQRT->setGeometry(QRect(380, 390, 121, 61));
        pushButton_SQRT->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_TAN = new QPushButton(centralwidget);
        pushButton_TAN->setObjectName(QString::fromUtf8("pushButton_TAN"));
        pushButton_TAN->setGeometry(QRect(260, 330, 121, 61));
        pushButton_TAN->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_COS = new QPushButton(centralwidget);
        pushButton_COS->setObjectName(QString::fromUtf8("pushButton_COS"));
        pushButton_COS->setGeometry(QRect(40, 330, 101, 61));
        pushButton_COS->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_ACOS = new QPushButton(centralwidget);
        pushButton_ACOS->setObjectName(QString::fromUtf8("pushButton_ACOS"));
        pushButton_ACOS->setGeometry(QRect(40, 390, 101, 61));
        pushButton_ACOS->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_ASIN = new QPushButton(centralwidget);
        pushButton_ASIN->setObjectName(QString::fromUtf8("pushButton_ASIN"));
        pushButton_ASIN->setGeometry(QRect(140, 390, 121, 61));
        pushButton_ASIN->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_ATAN = new QPushButton(centralwidget);
        pushButton_ATAN->setObjectName(QString::fromUtf8("pushButton_ATAN"));
        pushButton_ATAN->setGeometry(QRect(260, 390, 121, 61));
        pushButton_ATAN->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_LOG = new QPushButton(centralwidget);
        pushButton_LOG->setObjectName(QString::fromUtf8("pushButton_LOG"));
        pushButton_LOG->setGeometry(QRect(140, 450, 121, 61));
        pushButton_LOG->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_BKT_RIGHT = new QPushButton(centralwidget);
        pushButton_BKT_RIGHT->setObjectName(QString::fromUtf8("pushButton_BKT_RIGHT"));
        pushButton_BKT_RIGHT->setGeometry(QRect(380, 450, 121, 61));
        pushButton_BKT_RIGHT->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_BKT_LEFT = new QPushButton(centralwidget);
        pushButton_BKT_LEFT->setObjectName(QString::fromUtf8("pushButton_BKT_LEFT"));
        pushButton_BKT_LEFT->setGeometry(QRect(260, 450, 121, 61));
        pushButton_BKT_LEFT->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_LN = new QPushButton(centralwidget);
        pushButton_LN->setObjectName(QString::fromUtf8("pushButton_LN"));
        pushButton_LN->setGeometry(QRect(40, 450, 101, 61));
        pushButton_LN->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_POW = new QPushButton(centralwidget);
        pushButton_POW->setObjectName(QString::fromUtf8("pushButton_POW"));
        pushButton_POW->setGeometry(QRect(380, 330, 121, 61));
        pushButton_POW->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_X = new QPushButton(centralwidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setGeometry(QRect(260, 270, 121, 61));
        pushButton_X->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 150, 101, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_DEL = new QPushButton(centralwidget);
        pushButton_DEL->setObjectName(QString::fromUtf8("pushButton_DEL"));
        pushButton_DEL->setGeometry(QRect(380, 270, 121, 61));
        pushButton_DEL->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(140, 510, 181, 81));
        pushButton_AC->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #F2A23C;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;\n"
""));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(550, 450, 361, 251));
        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        pushButton_result->setGeometry(QRect(320, 510, 201, 81));
        pushButton_result->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #F2A23C;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;\n"
""));
        deposit = new QWidget(centralwidget);
        deposit->setObjectName(QString::fromUtf8("deposit"));
        deposit->setGeometry(QRect(940, 10, 359, 571));
        deposit->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #4F4F50;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_10 = new QLabel(deposit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 180, 49));
        label_10->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(deposit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(179, 0, 180, 49));
        label_11->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(deposit);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(179, 96, 180, 49));
        label_12->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(deposit);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 96, 180, 49));
        label_13->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(deposit);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 192, 180, 49));
        label_14->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_14->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(deposit);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(179, 288, 180, 49));
        label_16->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(deposit);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 288, 180, 49));
        label_17->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_17->setAlignment(Qt::AlignCenter);
        doubleSpinBox_8 = new QDoubleSpinBox(deposit);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setGeometry(QRect(0, 48, 180, 49));
        doubleSpinBox_8->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_8->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_8->setMaximum(10000000000.000000000000000);
        doubleSpinBox_5 = new QDoubleSpinBox(deposit);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(179, 48, 180, 49));
        doubleSpinBox_5->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_5->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_5->setDecimals(0);
        doubleSpinBox_5->setMaximum(120.000000000000000);
        doubleSpinBox_4 = new QDoubleSpinBox(deposit);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(0, 144, 180, 49));
        doubleSpinBox_4->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_7 = new QDoubleSpinBox(deposit);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setGeometry(QRect(179, 144, 180, 49));
        doubleSpinBox_7->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_7->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_12 = new QDoubleSpinBox(deposit);
        doubleSpinBox_12->setObjectName(QString::fromUtf8("doubleSpinBox_12"));
        doubleSpinBox_12->setGeometry(QRect(0, 336, 60, 49));
        doubleSpinBox_12->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_12->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_12->setDecimals(0);
        doubleSpinBox_12->setMaximum(120.000000000000000);
        doubleSpinBox_9 = new QDoubleSpinBox(deposit);
        doubleSpinBox_9->setObjectName(QString::fromUtf8("doubleSpinBox_9"));
        doubleSpinBox_9->setGeometry(QRect(0, 384, 60, 49));
        doubleSpinBox_9->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_9->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_9->setDecimals(0);
        doubleSpinBox_9->setMaximum(120.000000000000000);
        doubleSpinBox_14 = new QDoubleSpinBox(deposit);
        doubleSpinBox_14->setObjectName(QString::fromUtf8("doubleSpinBox_14"));
        doubleSpinBox_14->setGeometry(QRect(0, 432, 60, 49));
        doubleSpinBox_14->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_14->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_14->setDecimals(0);
        doubleSpinBox_14->setMaximum(120.000000000000000);
        doubleSpinBox_13 = new QDoubleSpinBox(deposit);
        doubleSpinBox_13->setObjectName(QString::fromUtf8("doubleSpinBox_13"));
        doubleSpinBox_13->setGeometry(QRect(179, 384, 60, 49));
        doubleSpinBox_13->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_13->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_13->setDecimals(0);
        doubleSpinBox_13->setMaximum(120.000000000000000);
        doubleSpinBox_11 = new QDoubleSpinBox(deposit);
        doubleSpinBox_11->setObjectName(QString::fromUtf8("doubleSpinBox_11"));
        doubleSpinBox_11->setGeometry(QRect(179, 336, 60, 49));
        doubleSpinBox_11->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_11->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_11->setDecimals(0);
        doubleSpinBox_11->setMaximum(120.000000000000000);
        doubleSpinBox_10 = new QDoubleSpinBox(deposit);
        doubleSpinBox_10->setObjectName(QString::fromUtf8("doubleSpinBox_10"));
        doubleSpinBox_10->setGeometry(QRect(179, 432, 60, 49));
        doubleSpinBox_10->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_10->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_10->setDecimals(0);
        doubleSpinBox_10->setMaximum(120.000000000000000);
        doubleSpinBox_17 = new QDoubleSpinBox(deposit);
        doubleSpinBox_17->setObjectName(QString::fromUtf8("doubleSpinBox_17"));
        doubleSpinBox_17->setGeometry(QRect(59, 336, 121, 49));
        doubleSpinBox_17->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_17->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_17->setMaximum(10000000000.000000000000000);
        doubleSpinBox_19 = new QDoubleSpinBox(deposit);
        doubleSpinBox_19->setObjectName(QString::fromUtf8("doubleSpinBox_19"));
        doubleSpinBox_19->setGeometry(QRect(59, 384, 121, 49));
        doubleSpinBox_19->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_19->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_19->setMaximum(10000000000.000000000000000);
        doubleSpinBox_20 = new QDoubleSpinBox(deposit);
        doubleSpinBox_20->setObjectName(QString::fromUtf8("doubleSpinBox_20"));
        doubleSpinBox_20->setGeometry(QRect(59, 432, 121, 49));
        doubleSpinBox_20->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_20->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_20->setMaximum(10000000000.000000000000000);
        doubleSpinBox_15 = new QDoubleSpinBox(deposit);
        doubleSpinBox_15->setObjectName(QString::fromUtf8("doubleSpinBox_15"));
        doubleSpinBox_15->setGeometry(QRect(238, 336, 121, 49));
        doubleSpinBox_15->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_15->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_15->setMaximum(10000000000.000000000000000);
        doubleSpinBox_16 = new QDoubleSpinBox(deposit);
        doubleSpinBox_16->setObjectName(QString::fromUtf8("doubleSpinBox_16"));
        doubleSpinBox_16->setGeometry(QRect(238, 384, 121, 49));
        doubleSpinBox_16->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_16->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_16->setMaximum(10000000000.000000000000000);
        doubleSpinBox_18 = new QDoubleSpinBox(deposit);
        doubleSpinBox_18->setObjectName(QString::fromUtf8("doubleSpinBox_18"));
        doubleSpinBox_18->setGeometry(QRect(238, 432, 121, 49));
        doubleSpinBox_18->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_18->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_18->setMaximum(10000000000.000000000000000);
        label_18 = new QLabel(deposit);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 480, 120, 46));
        label_18->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_15 = new QLabel(deposit);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(119, 480, 120, 46));
        label_15->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_19 = new QLabel(deposit);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(238, 480, 121, 46));
        label_19->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton_10 = new QPushButton(deposit);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(179, 240, 180, 49));
        pushButton_10->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #F2A23C;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;\n"
""));
        label_20 = new QLabel(deposit);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(0, 525, 120, 46));
        label_20->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(deposit);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(119, 525, 120, 46));
        label_21->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(deposit);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(238, 525, 121, 46));
        label_22->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_22->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(deposit);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(179, 192, 180, 49));
        label_23 = new QLabel(widget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(0, 0, 101, 49));
        label_23->setAlignment(Qt::AlignCenter);
        splitter = new QSplitter(widget_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(110, 1, 58, 47));
        splitter->setMaximumSize(QSize(16777215, 49));
        splitter->setOrientation(Qt::Vertical);
        radioButton = new QRadioButton(splitter);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);
        splitter->addWidget(radioButton);
        radioButton_2 = new QRadioButton(splitter);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(false);
        splitter->addWidget(radioButton_2);
        comboBox = new QComboBox(deposit);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(0, 240, 180, 49));
        comboBox->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 10px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;\n"
""));
        comboBox->setIconSize(QSize(16, 16));
        credit = new QWidget(centralwidget);
        credit->setObjectName(QString::fromUtf8("credit"));
        credit->setEnabled(true);
        credit->setGeometry(QRect(540, 10, 379, 435));
        credit->setMinimumSize(QSize(379, 435));
        credit->setMaximumSize(QSize(379, 475));
        credit->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #4F4F50;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox = new QDoubleSpinBox(credit);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(0, 49, 190, 49));
        doubleSpinBox->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox->setMaximum(1000000000.000000000000000);
        doubleSpinBox_2 = new QDoubleSpinBox(credit);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(0, 146, 190, 49));
        doubleSpinBox_2->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_2->setDecimals(0);
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(3600.000000000000000);
        doubleSpinBox_2->setValue(0.000000000000000);
        doubleSpinBox_3 = new QDoubleSpinBox(credit);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(189, 49, 190, 49));
        doubleSpinBox_3->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        doubleSpinBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        doubleSpinBox_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_3->setDecimals(2);
        doubleSpinBox_3->setMaximum(2000.000000000000000);
        label_5 = new QLabel(credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 242, 190, 49));
        label_5->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 386, 190, 49));
        label_6->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(credit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 194, 190, 49));
        label_7->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(credit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 290, 190, 49));
        label_8->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(credit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 338, 190, 49));
        label_9->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_9->setAlignment(Qt::AlignCenter);
        radio_widget = new QWidget(credit);
        radio_widget->setObjectName(QString::fromUtf8("radio_widget"));
        radio_widget->setGeometry(QRect(198, 101, 171, 49));
        radioButton_ANN = new QRadioButton(radio_widget);
        radioButton_ANN->setObjectName(QString::fromUtf8("radioButton_ANN"));
        radioButton_ANN->setGeometry(QRect(0, 0, 171, 20));
        radioButton_DIFF = new QRadioButton(radio_widget);
        radioButton_DIFF->setObjectName(QString::fromUtf8("radioButton_DIFF"));
        radioButton_DIFF->setGeometry(QRect(0, 21, 167, 20));
        radioButton_DIFF->setChecked(true);
        label_credit_sum = new QLabel(credit);
        label_credit_sum->setObjectName(QString::fromUtf8("label_credit_sum"));
        label_credit_sum->setGeometry(QRect(0, 0, 190, 50));
        label_credit_sum->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_sum->setAlignment(Qt::AlignCenter);
        label_credit_proc = new QLabel(credit);
        label_credit_proc->setObjectName(QString::fromUtf8("label_credit_proc"));
        label_credit_proc->setGeometry(QRect(189, 0, 190, 50));
        label_credit_proc->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_proc->setAlignment(Qt::AlignCenter);
        label_credit_time = new QLabel(credit);
        label_credit_time->setObjectName(QString::fromUtf8("label_credit_time"));
        label_credit_time->setGeometry(QRect(0, 96, 190, 51));
        label_credit_time->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #757676;\n"
"color: #FFFFFF;\n"
"padding: 5px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_time->setAlignment(Qt::AlignCenter);
        label_credit_diff = new QLabel(credit);
        label_credit_diff->setObjectName(QString::fromUtf8("label_credit_diff"));
        label_credit_diff->setGeometry(QRect(190, 390, 190, 49));
        label_credit_diff->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_total = new QLabel(credit);
        label_credit_total->setObjectName(QString::fromUtf8("label_credit_total"));
        label_credit_total->setGeometry(QRect(189, 290, 190, 49));
        label_credit_total->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_over = new QLabel(credit);
        label_credit_over->setObjectName(QString::fromUtf8("label_credit_over"));
        label_credit_over->setGeometry(QRect(190, 340, 190, 49));
        label_credit_over->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_max = new QLabel(credit);
        label_credit_max->setObjectName(QString::fromUtf8("label_credit_max"));
        label_credit_max->setGeometry(QRect(189, 194, 190, 49));
        label_credit_max->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        label_credit_min = new QLabel(credit);
        label_credit_min->setObjectName(QString::fromUtf8("label_credit_min"));
        label_credit_min->setGeometry(QRect(189, 242, 190, 49));
        label_credit_min->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #5D5D5E;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;"));
        pushButton = new QPushButton(credit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(189, 146, 190, 50));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 0px;\n"
"background-color: #F2A23C;\n"
"color: #FFFFFF;\n"
"padding: 0px;\n"
"margin: 0px;\n"
"border: 1px solid #4F4F50;\n"
""));
        x_input = new QLineEdit(centralwidget);
        x_input->setObjectName(QString::fromUtf8("x_input"));
        x_input->setGeometry(QRect(1320, 50, 121, 111));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(whatsthis)
        result_show->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        result_show->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_PLUS->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_MINUS->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_UMN->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_DOT->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_SIN->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_MOD->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_SQRT->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_TAN->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_COS->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_ACOS->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_ASIN->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_ATAN->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_LOG->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_BKT_RIGHT->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_BKT_LEFT->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_LN->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_POW->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_DEL->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\271", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\207\320\260\321\201\321\202\320\270\321\207\320\275\321\213\321\205 \321\201\320\275\321\217\321\202\320\270\320\271", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \n"
"\320\262\320\272\320\273\320\260\320\264\320\265", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265\n"
"\320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217\n"
"\320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\223\320\276\320\264", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273 \320\263\320\276\320\264\320\260", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\234\320\265\321\201\321\217\321\206", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\320\270\320\266\320\265\320\275\320\270\320\265 \320\262\321\213\320\277\320\273\320\260\321\202\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260", nullptr));
        radioButton_ANN->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        radioButton_DIFF->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label_credit_sum->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_credit_proc->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_credit_time->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 \320\262 \320\274\320\265\321\201\321\217\321\206\321\205", nullptr));
        label_credit_diff->setText(QString());
        label_credit_total->setText(QString());
        label_credit_over->setText(QString());
        label_credit_max->setText(QString());
        label_credit_min->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
