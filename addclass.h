#ifndef ADDCLASS_H
#define ADDCLASS_H

#include "subject.h"
#include <QWidget>
using namespace std;

static vector <Subject> classes;
namespace Ui {
class AddClass;
}

class AddClass : public QWidget
{
    Q_OBJECT

public:
    explicit AddClass(QWidget *parent = nullptr);
    ~AddClass();

private slots:
    void on_class_submit_clicked();

private:
    Ui::AddClass *ui;
};

#endif // ADDCLASS_H
