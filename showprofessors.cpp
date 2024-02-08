#include "showprofessors.h"
#include "ui_showprofessors.h"

ShowProfessors::ShowProfessors(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowProfessors)
{
    ui->setupUi(this);
}

ShowProfessors::~ShowProfessors()
{
    delete ui;
}
