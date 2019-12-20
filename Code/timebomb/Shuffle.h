#ifndef SHUFFLE_H
#define SHUFFLE_H
#include <QWidget>

namespace Ui {
class Shuffle;
}

class Shuffle : public QWidget {
    Q_OBJECT

public:
    explicit Shuffle(QWidget *parent = nullptr);
    ~Shuffle();

private:
    Ui::Shuffle *ui;

public:
    void retourMainWindow();


};
#endif // SHUFFLE_H
