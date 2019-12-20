#ifndef DEFAITE_H
#define DEFAITE_H

#include <QWidget>

namespace Ui {
class Defaite;
}

class Defaite : public QWidget {
    Q_OBJECT

public:
    explicit Defaite(QWidget *parent = nullptr);
    ~Defaite();

private:
    Ui::Defaite *ui;

private slots:
    void on_rejouer_bouton_pressed();
};
#endif // DEFAITE_H
