#ifndef ADDPROFESSOR_H
#define ADDPROFESSOR_H

#include <QWidget>
#include "professor.h"
static vector<Professor> professors;

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
