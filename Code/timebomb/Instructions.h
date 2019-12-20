#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H
#include <QWidget>

namespace Ui {
class Instructions;
}

class Instructions : public QWidget {
    Q_OBJECT

public:
    explicit Instructions(QWidget *parent = nullptr);
    ~Instructions();

private slots:

    void on_pushButton_retour_pressed();

private:
    Ui::Instructions *ui;
};
#endif // INSTRUCTIONS_H
