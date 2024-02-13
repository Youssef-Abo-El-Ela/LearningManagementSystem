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

private:
    Ui::Show *ui;
};

#endif // SHOW_H
