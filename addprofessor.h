#ifndef ADDPROFESSOR_H
#define ADDPROFESSOR_H

#include "professor.h"
#include <QWidget>
extern Professor prof;
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

private:
    Ui::AddProfessor *ui;
};

#endif // ADDPROFESSOR_H
