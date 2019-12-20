#ifndef OPTIONS_H
#define OPTIONS_H
#include <QWidget>

namespace Ui {
class Options;
}

class Options : public QWidget {
    Q_OBJECT

public:
    explicit Options(QWidget *parent = nullptr);
    ~Options();

private slots:

    void on_pushButton_retour_pressed();
    void on_fullScreenOn_stateChanged(int arg1);
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::Options *ui;
};
#endif // OPTIONS_H
