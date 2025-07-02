#include "mainwindow.h"
#include "ui_mainwindow.h"

float newnum,a,b,res1,s=0,c=0,g=0,k=0,f=0;
QString opp;
//newnum(inputs culuster),a(num1),b(num2),res1(calculation),s=0(track of sin),c=0(track of cos),g=0(single sin),k=0(single cos),f=(sesnses no op)
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sin_clicked()
{
    ui->he->setText("sin(");
    s=1;
    g=1;
}

void MainWindow::on_cos_clicked()
{
    ui->he->setText("cos(");
    c=1;
    k=1;
}

void MainWindow::on_plus_clicked()
{
    f=1;//opreator validation
    ui->he->setText("");
    opp="+";
    ui->he->setText(QString('+'));
    //checks for trig in num 1
    if(s==1 && c==0)
    {
        a=sin(newnum);
    }
    else if(s==0 && c==1)
    {
        a=cos(newnum);
    }

    else{   a=newnum;}
    newnum=0;
    s=0;
    c=0;
}


void MainWindow::on_minus_clicked()
{
    f=1;//opreator validation
    ui->he->setText("");
    opp="-";
    ui->he->setText(QString('-'));
    //checks for trig in num 1
    if(s==1 && c==0)
    {
        a=sin(newnum);
    }
    else if(s==0 && c==1)
    {
        a=cos(newnum);
    }

    else{   a=newnum;}
    newnum=0;
    s=0;
    c=0;
}


void MainWindow::on_mult_clicked()
{
    f=1;//opreator validation;
    opp="*";
    ui->he->setText(QString('*'));
    //checks for trig in num 1
    if(s==1 && c==0)
    {
        a=sin(newnum);
    }
    else if(s==0 && c==1)
    {
        a=cos(newnum);
    }

    else{   a=newnum;}
    newnum=0;
    s=0;
    c=0;
}


void MainWindow::on_div_clicked()
{
    f=1;//opreator validation
    ui->he->setText("");
    opp="/";
    ui->he->setText(QString('/'));
    //checks for trig in num 1
    if(s==1 && c==0)
    {
        a=sin(newnum);
    }
    else if(s==0 && c==1)
    {
        a=cos(newnum);
    }

    else{   a=newnum;}
    newnum=0;
    s=0;
    c=0;
}
void MainWindow::on_one_clicked()
{
    QString currentText = ui->he->text();


    QString newText = currentText + "1";


    ui->he->setText(newText);
    newnum=(newnum*10)+1;
}


void MainWindow::on_two_clicked()
{
    QString currentText = ui->he->text();


    QString newText = currentText + "2";


    ui->he->setText(newText);
    newnum=(newnum*10)+2;
}


void MainWindow::on_three_clicked()
{

    QString currentText = ui->he->text();


    QString newText = currentText + "3";


    ui->he->setText(newText);
    newnum=(newnum*10)+3;
}


void MainWindow::on_four_clicked()
{
    QString currentText = ui->he->text();


    QString newText = currentText + "4";


    ui->he->setText(newText);
    newnum=(newnum*10)+4;

}


void MainWindow::on_five_clicked()
{

    QString currentText = ui->he->text();


    QString newText = currentText + "5";


    ui->he->setText(newText);
    newnum=(newnum*10)+5;
}


void MainWindow::on_six_clicked()
{
    QString currentText = ui->he->text();


    QString newText = currentText + "6";


    ui->he->setText(newText);
    newnum=(newnum*10)+6;
}


void MainWindow::on_seven_clicked()
{
    QString currentText = ui->he->text();


    QString newText = currentText + "7";


    ui->he->setText(newText);
    newnum=(newnum*10)+7;
}


void MainWindow::on_eight_clicked()
{

    QString currentText = ui->he->text();


    QString newText = currentText + "8";


    ui->he->setText(newText);
    newnum=(newnum*10)+8;
}


void MainWindow::on_nine_clicked()
{

    QString currentText = ui->he->text();


    QString newText = currentText + "9";


    ui->he->setText(newText);
    newnum=(newnum*10)+9;
}


void MainWindow::on_zero_clicked()
{
    QString currentText = ui->he->text();


    QString newText = currentText + "0";


    ui->he->setText(newText);
    newnum=(newnum*10)+0;
}




void MainWindow::on_eq_clicked()
{
    if (f == 0 && s == 1)
    {
        res1 = sin(newnum);
        ui->he->setText(QString::number(res1));
    }
    if (f == 0 && c == 1)
    {
        res1 = cos(newnum);
        ui->he->setText(QString::number(res1));
    }



    //checks for trig in num 2
    else{
        if(s==1 && c==0)
        {
            b=sin(newnum);
        }
        else if(s==0 && c==1)
        {
            b=cos(newnum);
        }

        else{   b=newnum;}
        newnum=0;
        s=0;
        c=0;
    }
    if( opp=="+")
        res1=a+b ;

    else if( opp=="-")
        res1=a-b;
    else if( opp=="*")
        res1=a*b ;

    else if( opp=="/")
        res1=a/b;

    ui->he->setText(QString::number(res1));

    ui->she->setText(QString::number(a));
    ui->op->setText(QString::number(b));

}



void MainWindow::on_clear_clicked()
{
    newnum=0;
    a=0;
    b=0;
    ui->he->setText("");
    ui->she->setText("");
    ui->op->setText("");
    g=0;
    k=0;
    f=0;
}
