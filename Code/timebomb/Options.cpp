#include "Options.h"
#include "ui_options.h"
#include "mainwindow.h"


Options::Options(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Options)
{
    ui->setupUi(this);
}

Options::~Options()
{
    delete ui;
}


void Options::on_pushButton_retour_pressed()
{

    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){
        mv->display_contenu();
    }

}

void Options::on_fullScreenOn_stateChanged(int arg1)
{
    printf("%d",arg1);

    if(arg1 == 2){
        MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
        if (mv!= nullptr){
            mv->showFullScreen();
        }
    }
    if(arg1 == 0){
        MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
        if (mv!= nullptr){
            mv->showMaximized();
        }
    }
}

void Options::on_comboBox_currentIndexChanged(int index)
{
    printf("%d",index);
    qApp->setStyleSheet("");
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());


    if(index == 1){
        QFont comic("Comic Sans MS");
        qApp->setFont(comic);

        QFile fichier( ":/style/style/jacky.qss" );
        if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&fichier);
            qApp->setStyleSheet(stream.readAll());
            qDebug() << "Setting style";
            fichier.close();
        }


    }
    if(index == 0){
        if (mv!= nullptr){
            QFont merri("Merriweather");
            qApp->setFont(merri);
        }

        QFile fichier( ":/style/style/style.qss" );
        if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&fichier);
            qApp->setStyleSheet(stream.readAll());
            qDebug() << "Setting style";
            fichier.close();
        }
    }

    if(index == 2){

        QFont arial("Arial");
        qApp->setFont(arial);

        QFile fichier( ":/style/style/colorblind.qss" );
        if(fichier.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream stream(&fichier);
            qApp->setStyleSheet(stream.readAll());
            qDebug() << "Setting style";
            fichier.close();
        }
    }
}


