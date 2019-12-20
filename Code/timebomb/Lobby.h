#ifndef LOBBY_H
#define LOBBY_H
#include <QWidget>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class Lobby;
}

class Lobby : public QWidget {
    Q_OBJECT

public:
    explicit Lobby(QWidget *parent = nullptr,QString nom="unnamed room");
    ~Lobby();

private:
    Ui::Lobby *ui;
    QList<QLabel*> players;
    QList<QLabel*> chatLabels;
    QStringList playersPseudos;
    unsigned int lEmptyMsgLab;
    QLabel* notenoughppltostart;


public slots :


private slots:
    void on_bouton_retour_pressed();
    void refreshOnlineClient(QString pseudo,bool inOrOut);
    void initOnlineClient(QStringList s);
    void upChat(QStringList msg);
    void start();
    void canStart();
    void launchGame();

    void on_button_envoi_pressed();
};

#endif // LOBBY_H
