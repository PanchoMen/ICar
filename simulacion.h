#ifndef SIMULACION_H
#define SIMULACION_H

#include <QMainWindow>

namespace Ui {
class simulacion;
}

class simulacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit simulacion(QWidget *parent = 0);
    ~simulacion();

private:
    Ui::simulacion *ui;
};

#endif // SIMULACION_H
