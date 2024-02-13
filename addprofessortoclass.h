#ifndef ADDPROFESSORTOCLASS_H
#define ADDPROFESSORTOCLASS_H

#include <QDialog>

namespace Ui {
class addprofessortoclass;
}

class addprofessortoclass : public QDialog
{
    Q_OBJECT

public:
    explicit addprofessortoclass(QWidget *parent = nullptr);
    ~addprofessortoclass();

private slots:
    void on_submit_button_clicked();

private:
    Ui::addprofessortoclass *ui;
};

#endif // ADDPROFESSORTOCLASS_H
