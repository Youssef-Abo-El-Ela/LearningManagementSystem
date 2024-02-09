#ifndef SHOWPROFESSORS_H
#define SHOWPROFESSORS_H

#include <QWidget>

namespace Ui {
class ShowProfessors;
}

class ShowProfessors : public QWidget
{
    Q_OBJECT

public:
    explicit ShowProfessors(QWidget *parent = nullptr);
    ~ShowProfessors();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_clicked(bool checked);

private:
    Ui::ShowProfessors *ui;
};

#endif // SHOWPROFESSORS_H
