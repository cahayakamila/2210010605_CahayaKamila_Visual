#ifndef FORMUTAMA_H
#define FORMUTAMA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class formutama;
}
QT_END_NAMESPACE

class formutama : public QMainWindow
{
    Q_OBJECT

public:
    formutama(QWidget *parent = nullptr);
    ~formutama();

private:
    Ui::formutama *ui;
};
#endif // FORMUTAMA_H
