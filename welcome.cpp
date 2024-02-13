#include "welcome.h"
#include "edit.h"
#include "show.h"
#include "ui_welcome.h"



Welcome::Welcome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/Pics/Background.png");
    ui->backgroundimage->setPixmap(pic);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_show_button_clicked()
{
    QWidget *show_page = new Show();
    this->hide();
    show_page->show();
}


void Welcome::on_edit_button_clicked()
{
    QWidget *edit_page = new Edit();
    this -> hide();
    edit_page->show();
}

