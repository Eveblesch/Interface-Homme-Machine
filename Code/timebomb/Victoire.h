#ifndef VICTOIRE_H
#define VICTOIRE_H

#include <QWidget>

namespace Ui {
class Victoire;
}

class Victoire : public QWidget {
    Q_OBJECT

public:
    explicit Victoire(QWidget *parent = nullptr);
    ~Victoire();

private:
    Ui::Victoire *ui;

private slots:

};

#endif // VICTOIRE_H
