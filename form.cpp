#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent, int interger) :
    QWidget(parent),
    ui(new Ui::Form),
    test(interger)
{
    ui->setupUi(this);
    ui->textEdit->append(QString::number(test));
}

Form::~Form()
{
    delete ui;
}
