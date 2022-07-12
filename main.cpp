#include <QApplication>
#include "./ui_calculator.h"
#include "calculatorcainwindow.h"



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalculatorMainWindow window(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&window);
    window.label = caller.label;
    window.resize(320, 380);
    window.show();
    a.exec();
}

