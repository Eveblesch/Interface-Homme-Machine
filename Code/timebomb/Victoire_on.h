#ifndef VICTOIRE_ON_H
#define VICTOIRE_ON_H

#include <QWidget>

namespace Ui {
class Victoire_on;
}

class Victoire_on : public QWidget {
    Q_OBJECT

public:
    explicit Victoire_on(QWidget *parent = nullptr);
    ~Victoire_on();

private:
    Ui::Victoire_on *ui;

private slots:

};

#endif // VICTOIRE_H
