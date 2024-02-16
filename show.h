#ifndef SHOW_H
#define SHOW_H

#include <QWidget>

namespace Ui {
class Show;
}

class Show : public QWidget
{
    Q_OBJECT

public:
    explicit Show(QWidget *parent = nullptr);
    ~Show();

private slots:
    void on_classes_clicked();

    void on_students_clicked();

    void on_professors_clicked();

    void on_search_clicked();

    void on_pushButton_clicked();

private:
    Ui::Show *ui;
};

#endif // SHOW_H
