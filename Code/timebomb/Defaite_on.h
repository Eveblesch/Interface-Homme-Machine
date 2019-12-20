#ifndef DEFAITE_ON_H
#define DEFAITE_ON_H

#include <QWidget>

namespace Ui {
class Defaite_on;
}

class Defaite_on : public QWidget {
    Q_OBJECT

public:
    explicit Defaite_on(QWidget *parent = nullptr);
    ~Defaite_on();

private:
    Ui::Defaite_on *ui;

private slots:
    void on_rejouer_bouton_pressed();
};
#endif // DEFAITE_H
