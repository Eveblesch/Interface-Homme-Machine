#ifndef ACCUEIL_H
#define ACCUEIL_H
#include <QWidget>
#include <QApplication>
#include <QLibraryInfo>
#include <QTranslator>
#include <QMessageBox>

namespace Ui {
class Accueil;
}

class Accueil : public QWidget {
    Q_OBJECT

public:
    explicit Accueil(QWidget *parent = nullptr);
    ~Accueil();
    Ui::Accueil *ui;

signals:
    void pseudo(QString p);

private slots:
    void on_button_jouer_pressed();

    void on_button_instructions_pressed();

    void on_pushButton_options_pressed();

    void on_bouton_quitter_pressed();

    void on_button_offline_pressed();

    void changeEvent(QEvent *event);

    void on_button_solo_pressed();

private:


    QTranslator langageTranslate;
};

#endif // ACCUEIL_H
