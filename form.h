#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr, int test=0);
    ~Form();

private:
    Ui::Form *ui;
    int test;
};

#endif // FORM_H
