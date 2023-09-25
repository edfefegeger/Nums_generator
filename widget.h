#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void generateNumbers();
    void calculateResults();

private:
    Ui::Widget *ui;
    int inputNumbers[8]; // Массив для хранения введенных чисел
    int decimalResults[16]; // Массив для хранения результатов в десятичной системе
    int octalResults[16]; // Массив для хранения результатов в восьмеричной системе
    void initializeUI(); // Объявление функции инициализации UI
};

#endif // WIDGET_H
