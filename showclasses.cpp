#include "showclasses.h"
#include "globals.h"
#include "ui_showclasses.h"
#include "show.h"
#include "showclass.h"
ShowClasses::ShowClasses(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowClasses)
{
    ui->setupUi(this);
    QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/showss");
    this->ui->background_image->setPixmap(pic);
}

ShowClasses::~ShowClasses()
{
    delete ui;
}

void ShowClasses::on_pushButton_clicked()
{
    // Subject sub1("Elec","ELEC2214","1124","7:30 AM");
    // Subject sub2("Measure","SBE2214","1125","10:30 AM");
    // this->ui->listWidget->addItem(new QListWidgetItem((sub1.name).c_str()));
    // this->ui->listWidget->addItem(new QListWidgetItem((sub2.name).c_str()));

    for(unsigned int i =0; i < classes.size(); i++){
        this->ui->listWidget->addItem(new QListWidgetItem((classes[i].name).c_str()));
    }
    this->ui->pushButton->setEnabled(false);
}


void ShowClasses::on_pushButton_2_clicked()
{
    QWidget *shw = new Show  ;
    this->hide();
    shw->show();
}


void ShowClasses::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QWidget *show_class = new ShowClass();
    this->hide();
    show_class->show();
    class_name = item->text().toStdString();
}

