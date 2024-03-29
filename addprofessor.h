#ifndef ADDPROFESSOR_H
#define ADDPROFESSOR_H

#include <QWidget>
#include "professor.h"

namespace Ui {
class AddProfessor;
}

class AddProfessor : public QWidget
{
    Q_OBJECT

public:
    explicit AddProfessor(QWidget *parent = nullptr);
    ~AddProfessor();
private slots:
    void on_submit_prof_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddProfessor *ui;
};

#endif // ADDPROFESSOR_H
