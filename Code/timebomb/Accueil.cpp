#include "Accueil.h"
#include "ui_Accueil.h"
#include "mainwindow.h"


Accueil::Accueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Accueil)
{
    ui->setupUi(this);

    ui->langues_comboBox->addItems(QStringList() << "English" << "Français");
    connect(ui->langues_comboBox, static_cast<void (QComboBox::*)(const QString &)>(&QComboBox::currentIndexChanged),
            [=](const QString &str){
        langageTranslate.load("traduction_"+str,".");
        qApp->installTranslator(&langageTranslate);

        MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
        mv->trad(str);

    });

    langageTranslate.load(QString("traduction_") + QString("English.qm"));
    qApp->installTranslator(&langageTranslate);

    MainWindow* mv2 = dynamic_cast<MainWindow*>(this->parent());
    mv2->trad(QString("English.qm"));


    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!=nullptr) {
        connect(this,SIGNAL(pseudo(QString)),&mv->c,SLOT(hSetPseudo(QString)));
    }

    QMovie *movie = new QMovie(":/icones/images/shuffle.gif");

}

Accueil::~Accueil()
{
    delete ui;
}

void Accueil::on_button_jouer_pressed()
{
    bool ok;
    QString p = QInputDialog::getText(this,tr("Entrez un pseudal :"),tr(""),QLineEdit::Normal,"",&ok);
    if (ok && !p.isEmpty()) {
        emit pseudo(p);
        this->setHidden(true);
        MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
        if (!mv->c.connexion()) {
            QMessageBox alert;
            alert.setText("Le jeu en ligne n'est pas disponible actuellement.");
            alert.setStandardButtons(QMessageBox::Ok);
            alert.setDefaultButton(QMessageBox::Ok);
            alert.exec();
            if (mv!=nullptr) {
                mv->display_contenu();
            }
        } else {
            if (mv!= nullptr){
                QEventLoop* loop = new QEventLoop;
                connect(&mv->c,SIGNAL(gotLobby()),loop,SLOT(quit()));
                loop->exec();
                mv->display_choix_partie();
            }
        }
    }
}

void Accueil::on_button_instructions_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){

        mv->display_instructions();
    }

}

void Accueil::on_button_solo_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){

        mv->display_creation_partie_solo();
    }

}

void Accueil::on_pushButton_options_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){

        mv->display_options();
    }

}

void Accueil::on_bouton_quitter_pressed()
{
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){

        mv->close_app();
    }
}

void Accueil::on_button_offline_pressed()
{
    this->setHidden(true);
    MainWindow* mv = dynamic_cast<MainWindow*>(this->parent());
    if (mv!= nullptr){

        mv->display_creation_partie();
    }
}

void Accueil::changeEvent(QEvent *event)
{

        if (event->type() == QEvent::LanguageChange) {
            ui->retranslateUi(this);
        }

}
