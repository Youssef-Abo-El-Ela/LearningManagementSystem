#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "welcome.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/LearningManagementSystem/Pics/Background.png");
    this->ui->background_image->setPixmap(pic);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_button_clicked()
{
    string username = this->ui->username_text->text().toStdString();
    string password = this->ui->password_text->text().toStdString();

    if (username == "admin" && password == "admin"){
        QWidget *welcome_page = new Welcome();
        this->hide();
        welcome_page -> show();
    }
    else{
        throw invalid_argument("Invalid Arguments");
    }
}

