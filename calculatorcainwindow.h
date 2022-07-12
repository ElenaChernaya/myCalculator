//
// Created by Elena on 11.07.2022.
//

#ifndef QCALCULATOR_CALCULATORCAINWINDOW_H
#define QCALCULATOR_CALCULATORCAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLabel>
#include <QPushButton>
#include <iostream>

class CalculatorMainWindow : public QMainWindow {
    Q_OBJECT

private:
    double numbers, numFirst, numSecond;
    QString newLabel;
    bool plusOk = false;
    bool minusOk = false;
    bool multOk = false;
    bool divOk = false;

public:
    QLabel *label = nullptr;

    CalculatorMainWindow(QWidget *parent = nullptr) : QMainWindow(parent) {};

    ~CalculatorMainWindow() {};

public slots:

    void slot0() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot1() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot2() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot3() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot4() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot5() {
        label->setText(label->text());
        QPushButton *button = (QPushButton *) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot6() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot7() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot8() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };

    void slot9() {
        label->setText(label->text());
        QPushButton *button = (QPushButton*) sender();
        numbers = (label->text() + button->text()).toDouble();
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };


    // Слот для вывода дробных чисел
    void slotdot() {
        if (!(label->text().contains('.'))) {
            label->setText(label->text() + ".");
        }
    };


    // Слот добавления знака '-' к введенному числу
    void slotplus_minus() {
        label->setText(label->text());
        numbers = (label->text()).toDouble();
        numbers *= -1;
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    }


    // Слот вывода процентов от введенного числа
    void slotpersent() {
        numbers = (label->text()).toDouble();
        numbers *= 0.01;
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };


    // Слот для очистки поля от цифр. При нажатии АС - выводится 0
    void slotAC() {
        numbers = (label->text()).toDouble();
        numbers = 0;
        newLabel = QString::number(numbers, 'g', 13);
        label->setText(newLabel);
    };


    // Слот для сложения
    void slotplus()
    {
        numFirst = (label->text()).toDouble();
        label->setText(label->text());
        label->setText("");
        numSecond = (label->text()).toDouble();
        plusOk = true;
    };


    // Слот для вычитания
    void slotminus()
    {
        numFirst = (label->text()).toDouble();
        label->setText(label->text());
        label->setText("");
        numSecond = (label->text()).toDouble();
        minusOk = true;
    };


    // Слот для умножения
    void slotmult()
    {
        numFirst = (label->text()).toDouble();
        label->setText(label->text());
        label->setText("");
        numSecond = (label->text()).toDouble();
        multOk = true;
    };


    // Слот для деления
    void slotdiv()
    {
        numFirst = (label->text()).toDouble();
        label->setText(label->text());
        label->setText("");
        numSecond = (label->text()).toDouble();
        divOk = true;
    };


    // Слот вывода результата действий, при нажатии знака '='
    void slotequal()
    {
        if (plusOk)
        {
            numSecond = (label->text()).toDouble();
            numbers = numFirst + numSecond;
            newLabel = QString::number(numbers, 'g', 13);
            label->setText(newLabel);
            plusOk = false;
        }

        if (minusOk)
        {
            numSecond = (label->text()).toDouble();
            numbers = numFirst - numSecond;
            newLabel = QString::number(numbers, 'g', 13);
            label->setText(newLabel);
            minusOk = false;
        }

        if (multOk)
        {
            numSecond = (label->text()).toDouble();
            numbers = numFirst * numSecond;
            newLabel = QString::number(numbers, 'g', 13);
            label->setText(newLabel);
            multOk = false;
        }

        if (divOk)
        {
            numSecond = (label->text()).toDouble();
            numbers = numFirst / numSecond;
            newLabel = QString::number(numbers, 'g', 13);
            label->setText(newLabel);
            divOk = false;
        }
    };
};

#endif //QCALCULATOR_CALCULATORCAINWINDOW_H