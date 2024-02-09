#ifndef SHOWCLASS_H
#define SHOWCLASS_H

#include <QWidget>

namespace Ui {
class ShowClass;
}

class ShowClass : public QWidget
{
    Q_OBJECT

public:
    explicit ShowClass(QWidget *parent = nullptr);
    ~ShowClass();

private slots:
    void on_ok_button_clicked();

private:
    Ui::ShowClass *ui;
};

#endif // SHOWCLASS_H
