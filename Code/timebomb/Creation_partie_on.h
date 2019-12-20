#ifndef CREATION_PARTIE_ON_H
#define CREATION_PARTIE_ON_H
#include <QWidget>
#include <QThread>

namespace Ui {
class Creation_partie_on;
}

class Creation_partie_on : public QWidget {
    Q_OBJECT

public:
    explicit Creation_partie_on(QWidget *parent = nullptr);
    ~Creation_partie_on();

private slots:


    void on_button_retour_pressed();
    void on_button_create_pressed();
private:
    Ui::Creation_partie_on *ui;
};

#endif // CREATION_PARTIE_H
