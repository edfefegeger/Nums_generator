#include "widget.h"
#include "ui_widget.h"
#include <QRandomGenerator>
#include <QRegularExpressionValidator>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    initializeUI();
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::generateNumbers);
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::calculateResults);

    // Добавляем валидатор для всех QLineEdit
    QRegularExpression octalRegex("^(0[1-7][0-7]{4}|1[0-7][0-7]{4})$");
    QValidator *validator = new QRegularExpressionValidator(octalRegex, this);
    for (int i = 2; i <= 9; i++) {
        QLineEdit* lineEdit = findChild<QLineEdit*>(QString("lineEdit_%1").arg(i));
        if (lineEdit) {
            lineEdit->setValidator(validator);
        }
    }
}

void Widget::initializeUI() {
    QString gradientBackground = "background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #009900, stop:1 #ffffff);";
    setStyleSheet(gradientBackground);

    QList<QLineEdit*> lineEdits = findChildren<QLineEdit*>();
    for (QLineEdit* lineEdit : lineEdits) {
        lineEdit->setStyleSheet("background-color: white;");
    }

    // Устанавливаем белый фон только для label_12
    ui->label_12->setStyleSheet("background-color: white;");
    ui->label_11->setStyleSheet("background-color: white;");

    // Устанавливаем прозрачный фон для всех остальных QLabel
    QList<QLabel*> labels = findChildren<QLabel*>();
    for (QLabel* label : labels) {
        if (label != ui->label_12 & label != ui->label_11) {
            label->setAttribute(Qt::WA_TranslucentBackground);
        }
    }
}

void Widget::generateNumbers() {
    for (int i = 2; i <= 9; i++) {
        QLineEdit* lineEdit = findChild<QLineEdit*>(QString("lineEdit_%1").arg(i));
        if (lineEdit) {
            QString octalString;
            int firstDigit = QRandomGenerator::global()->bounded(2); // Генерируем случайное значение 0 или 1
            octalString.append(QString::number(firstDigit));
            for (int j = 0; j < 5; j++) {
                int digit = QRandomGenerator::global()->bounded(8);
                octalString.append(QString::number(digit));
            }
            lineEdit->setText(octalString);

            // Преобразование в двоичную систему и разделение на две строки
            QString octalText = lineEdit->text();
            int decimalValue = octalText.toInt(nullptr, 8);
            QString binaryString = QString::number(decimalValue, 2).rightJustified(16, '0');

            // Разделение на две строки
            QString firstHalf = binaryString.left(8);
            QString secondHalf = binaryString.right(8);

            // Вывод двоичных строк в QLabel
            QLabel* binaryLabel1 = findChild<QLabel*>(QString("binaryLabel1_%1").arg(i));
            QLabel* binaryLabel2 = findChild<QLabel*>(QString("binaryLabel2_%1").arg(i));
            if (binaryLabel1 && binaryLabel2) {
                binaryLabel1->setText(firstHalf);
                binaryLabel2->setText(secondHalf);
            }
        }
    }
}
void Widget::calculateResults() {
    QString binaryStrings[16];

    // Преобразование в двоичную систему и разделение на две строки
    for (int i = 2; i <= 9; i++) {
        QLineEdit* lineEdit = findChild<QLineEdit*>(QString("lineEdit_%1").arg(i));
        if (lineEdit) {
            QString octalText = lineEdit->text();
            int decimalValue = octalText.toInt(nullptr, 8);
            QString binaryString = QString::number(decimalValue, 2).rightJustified(16, '0');

            // Разделение на две строки
            QString firstHalf = binaryString.left(8);
            QString secondHalf = binaryString.right(8);

            binaryStrings[i - 2] = firstHalf;
            binaryStrings[i - 2 + 8] = secondHalf;
        }
    }

    // Вычисление суммы с учетом переносов
    int sum = 0;
    int carry = 0;
    for (int i = 15; i >= 0; i--) {
        int decimalValue = binaryStrings[i].toInt(nullptr, 2);
        int result = decimalValue + carry;
        if (result > 255) {
            carry = 1;
            result -= 256;
        } else {
            carry = 0;
        }
        sum += result;
    }

    // Применение правила к результату
    while (sum > 255) {
        sum -= 256;
    }

    // Вывод результата в восьмеричной системе счисления
    QString octalResult = QString::number(sum, 8);
    ui->label_12->setText(octalResult);
}


Widget::~Widget()
{
    delete ui;
}
