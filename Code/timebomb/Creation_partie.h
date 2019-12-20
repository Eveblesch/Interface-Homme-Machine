#ifndef CREATION_PARTIE_H
#define CREATION_PARTIE_H
#include <QWidget>

namespace Ui {
class Creation_partie;
}

class Creation_partie : public QWidget {
    Q_OBJECT

public:
    explicit Creation_partie(QWidget *parent = nullptr);
    ~Creation_partie();

private slots:


    void on_button_retour_pressed();
    void on_button_create_pressed();
private:
    Ui::Creation_partie *ui;
};

#endif // CREATION_PARTIE_H
