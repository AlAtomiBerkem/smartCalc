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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

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
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
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
        pushButton_1->setGeometry(QRect(30, 90, 101, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 90, 121, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_PLUS = new QPushButton(centralwidget);
        pushButton_PLUS->setObjectName(QString::fromUtf8("pushButton_PLUS"));
        pushButton_PLUS->setGeometry(QRect(400, 90, 121, 61));
        pushButton_PLUS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 150, 121, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_MINUS = new QPushButton(centralwidget);
        pushButton_MINUS->setObjectName(QString::fromUtf8("pushButton_MINUS"));
        pushButton_MINUS->setGeometry(QRect(400, 150, 121, 61));
        pushButton_MINUS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 1, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(270, 150, 121, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(140, 210, 121, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_UMN = new QPushButton(centralwidget);
        pushButton_UMN->setObjectName(QString::fromUtf8("pushButton_UMN"));
        pushButton_UMN->setGeometry(QRect(400, 210, 121, 61));
        pushButton_UMN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(270, 210, 121, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 210, 101, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_DOT = new QPushButton(centralwidget);
        pushButton_DOT->setObjectName(QString::fromUtf8("pushButton_DOT"));
        pushButton_DOT->setGeometry(QRect(30, 270, 101, 61));
        pushButton_DOT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(140, 270, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_SIN = new QPushButton(centralwidget);
        pushButton_SIN->setObjectName(QString::fromUtf8("pushButton_SIN"));
        pushButton_SIN->setGeometry(QRect(140, 330, 121, 61));
        pushButton_MOD = new QPushButton(centralwidget);
        pushButton_MOD->setObjectName(QString::fromUtf8("pushButton_MOD"));
        pushButton_MOD->setGeometry(QRect(30, 510, 101, 61));
        pushButton_SQRT = new QPushButton(centralwidget);
        pushButton_SQRT->setObjectName(QString::fromUtf8("pushButton_SQRT"));
        pushButton_SQRT->setGeometry(QRect(400, 390, 121, 61));
        pushButton_TAN = new QPushButton(centralwidget);
        pushButton_TAN->setObjectName(QString::fromUtf8("pushButton_TAN"));
        pushButton_TAN->setGeometry(QRect(270, 330, 121, 61));
        pushButton_COS = new QPushButton(centralwidget);
        pushButton_COS->setObjectName(QString::fromUtf8("pushButton_COS"));
        pushButton_COS->setGeometry(QRect(30, 330, 101, 61));
        pushButton_ACOS = new QPushButton(centralwidget);
        pushButton_ACOS->setObjectName(QString::fromUtf8("pushButton_ACOS"));
        pushButton_ACOS->setGeometry(QRect(30, 390, 101, 61));
        pushButton_ASIN = new QPushButton(centralwidget);
        pushButton_ASIN->setObjectName(QString::fromUtf8("pushButton_ASIN"));
        pushButton_ASIN->setGeometry(QRect(140, 390, 121, 61));
        pushButton_ATAN = new QPushButton(centralwidget);
        pushButton_ATAN->setObjectName(QString::fromUtf8("pushButton_ATAN"));
        pushButton_ATAN->setGeometry(QRect(270, 390, 121, 61));
        pushButton_LOG = new QPushButton(centralwidget);
        pushButton_LOG->setObjectName(QString::fromUtf8("pushButton_LOG"));
        pushButton_LOG->setGeometry(QRect(140, 450, 121, 61));
        pushButton_BKT_RIGHT = new QPushButton(centralwidget);
        pushButton_BKT_RIGHT->setObjectName(QString::fromUtf8("pushButton_BKT_RIGHT"));
        pushButton_BKT_RIGHT->setGeometry(QRect(400, 450, 121, 61));
        pushButton_BKT_LEFT = new QPushButton(centralwidget);
        pushButton_BKT_LEFT->setObjectName(QString::fromUtf8("pushButton_BKT_LEFT"));
        pushButton_BKT_LEFT->setGeometry(QRect(270, 450, 121, 61));
        pushButton_LN = new QPushButton(centralwidget);
        pushButton_LN->setObjectName(QString::fromUtf8("pushButton_LN"));
        pushButton_LN->setGeometry(QRect(30, 450, 101, 61));
        pushButton_POW = new QPushButton(centralwidget);
        pushButton_POW->setObjectName(QString::fromUtf8("pushButton_POW"));
        pushButton_POW->setGeometry(QRect(400, 330, 121, 61));
        pushButton_X = new QPushButton(centralwidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setGeometry(QRect(270, 270, 121, 61));
        pushButton_X->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 150, 101, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_DEL = new QPushButton(centralwidget);
        pushButton_DEL->setObjectName(QString::fromUtf8("pushButton_DEL"));
        pushButton_DEL->setGeometry(QRect(400, 270, 121, 61));
        pushButton_DEL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(540, 0, 171, 161));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
