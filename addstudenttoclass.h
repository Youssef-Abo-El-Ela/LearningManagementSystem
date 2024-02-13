#ifndef ADDSTUDENTTOCLASS_H
#define ADDSTUDENTTOCLASS_H

#include <QWidget>

namespace Ui {
class AddStudentToClass;
}

class AddStudentToClass : public QWidget
{
    Q_OBJECT

public:
    explicit AddStudentToClass(QWidget *parent = nullptr);
    ~AddStudentToClass();

private slots:
    void on_submit_button_clicked();

private:
    Ui::AddStudentToClass *ui;
};

#endif // ADDSTUDENTTOCLASS_H
