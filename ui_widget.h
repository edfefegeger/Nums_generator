/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(685, 470);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout->addWidget(lineEdit_3);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(Widget);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout->addWidget(lineEdit_4);

        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout->addWidget(label_5);

        lineEdit_5 = new QLineEdit(Widget);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout->addWidget(lineEdit_5);

        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        lineEdit_6 = new QLineEdit(Widget);
        lineEdit_6->setObjectName("lineEdit_6");

        verticalLayout->addWidget(lineEdit_6);

        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        lineEdit_7 = new QLineEdit(Widget);
        lineEdit_7->setObjectName("lineEdit_7");

        verticalLayout->addWidget(lineEdit_7);

        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        lineEdit_8 = new QLineEdit(Widget);
        lineEdit_8->setObjectName("lineEdit_8");

        verticalLayout->addWidget(lineEdit_8);

        label_9 = new QLabel(Widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        verticalLayout->addWidget(label_9);

        lineEdit_9 = new QLineEdit(Widget);
        lineEdit_9->setObjectName("lineEdit_9");

        verticalLayout->addWidget(lineEdit_9);


        gridLayout->addLayout(verticalLayout, 0, 0, 4, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_11 = new QLabel(Widget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(Widget);
        label_12->setObjectName("label_12");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_12);


        gridLayout->addLayout(verticalLayout_2, 3, 2, 1, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 100));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        pushButton->setFont(font2);

        gridLayout->addWidget(pushButton, 3, 5, 1, 1);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 100));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Black")});
        font3.setPointSize(12);
        font3.setBold(true);
        pushButton_2->setFont(font3);

        gridLayout->addWidget(pushButton_2, 2, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        label->setFont(font4);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "1 ", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "2", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "3", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "4", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "5", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "7", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "8", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\320\240\320\260\321\201\321\201\320\270\321\207\320\270\321\202\320\260\320\275\320\275\320\260\321\217 \321\201\321\203\320\274\320\274\320\260:", nullptr));
        label_12->setText(QString());
        pushButton->setText(QCoreApplication::translate("Widget", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\260", nullptr));
#if QT_CONFIG(statustip)
        label->setStatusTip(QCoreApplication::translate("Widget", "0", nullptr));
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("Widget", "NUMS GENERATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
