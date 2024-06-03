#include "AnotherPage.h"
#include "ui_secdialog.h"

AnotherPage::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

AnotherPage::~SecDialog()
{
    delete ui;
}
