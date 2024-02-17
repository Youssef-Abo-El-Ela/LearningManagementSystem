#ifndef SHOWCLASSES_H
#define SHOWCLASSES_H

#include "qlistwidget.h"
#include "subject.h"
#include <QWidget>

namespace Ui {
class ShowClasses;
}

class ShowClasses : public QWidget
{
    Q_OBJECT

public:
    explicit ShowClasses(QWidget *parent = nullptr);
    ~ShowClasses();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::ShowClasses *ui;
};

#endif // SHOWCLASSES_H
