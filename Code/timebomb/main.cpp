#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <QFile>
#include <QDebug>
#include <QTranslator>
#include "client.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QTranslator translator;

    MainWindow w(nullptr,new Client);
    w.showNormal();
    w.show();


    QFile fichier( ":/style/style/style.qss" );
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fichier);
        a.setStyleSheet(stream.readAll());
        qDebug() << "Setting style";
        fichier.close();
    }


    QFont font("Merriweather");

    QApplication::setFont(font);


    return a.exec();
}
