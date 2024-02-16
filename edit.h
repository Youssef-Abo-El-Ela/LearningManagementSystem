#ifndef EDIT_H
#define EDIT_H

#include <QWidget>

namespace Ui {
class Edit;
}

class Edit : public QWidget
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

private slots:
    void on_add_student_clicked();

    void on_add_professor_clicked();

    void on_add_class_clicked();

    void on_add_prof_to_class_clicked();

    void on_add_stud_to_class_clicked();

    void on_pushButton_clicked();

private:
    Ui::Edit *ui;
};

#endif // EDIT_H
