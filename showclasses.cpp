#include "showclasses.h"
#include "addclass.h"
#include "ui_showclasses.h"

ShowClasses::ShowClasses(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowClasses)
{
    ui->setupUi(this);
    QPixmap background("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/Pics/Background.png");
    ui->background_image->setPixmap(background);
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

