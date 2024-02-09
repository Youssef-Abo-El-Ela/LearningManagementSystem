#ifndef SHOWSTUDENTS_H
#define SHOWSTUDENTS_H

#include <QDialog>

namespace Ui {
class showstudents;
}

class showstudents : public QDialog
{
    Q_OBJECT

public:
    explicit showstudents(QWidget *parent = nullptr);
    ~showstudents();

private slots:
    void on_pushButton_clicked();

private:
    Ui::showstudents *ui;
};

#endif // SHOWSTUDENTS_H
