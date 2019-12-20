#ifndef CREATION_PARTIE_SOLO_H
#define CREATION_PARTIE_SOLO_H
#include <QWidget>

namespace Ui {
class Creation_partie_solo;
}

class Creation_partie_solo : public QWidget {
    Q_OBJECT

public:
    explicit Creation_partie_solo(QWidget *parent = nullptr);
    ~Creation_partie_solo();

private slots:


    void on_button_retour_pressed();
    void on_button_create_pressed();
private:
    Ui::Creation_partie_solo *ui;
};
#endif // CREATION_PARTIE_SOLO_H
