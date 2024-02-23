#ifndef WELCOME_H
#define WELCOME_H

#include "edit.h"
#include <QWidget>

namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void on_show_button_clicked();

    void on_edit_button_clicked();

    void on_export_button_clicked();

    void on_import_button_clicked();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
