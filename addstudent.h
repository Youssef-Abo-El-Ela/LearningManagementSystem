#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <QWidget>
#include <student.h>
static vector<Student> students;
namespace Ui {
class AddStudent;
}

class AddStudent : public QWidget
{
    Q_OBJECT

public:
    explicit AddStudent(QWidget *parent = nullptr);
    ~AddStudent();

private slots:
    void on_submit_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddStudent *ui;
};

#endif // ADDSTUDENT_H
