#ifndef CHOIX_PARTIE_H
#define CHOIX_PARTIE_H
#include <QWidget>
#include "baptiste.h"

namespace Ui {
class Choix_partie;
}

class Choix_partie : public QWidget {
    Q_OBJECT

public:
    explicit Choix_partie(QWidget *parent = nullptr);
    ~Choix_partie();

    QList<struct salon> salons;

signals:
    void prepRoom(QStringList l);
    void gotAuthRoom(QString name);

private slots:
    void on_button_retour_pressed();
    void on_button_creer_partie_pressed();
    void joinRoom(struct salon);
    void enterRoom(QString name);
    void fwdGotAuthRoom(int n);
    void hRefreshRooms();
    //void refreshRooms();

private:
    Ui::Choix_partie *ui;
};
#endif // CHOIX_PARTIE_H
