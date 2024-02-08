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

private:
    Ui::ShowProfessors *ui;
};

#endif // SHOWPROFESSORS_H
