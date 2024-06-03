#ifndef AnotherPage
#define AnotherPage

#include <QDialog>


namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~AnotherPage();

private:
    Ui::AnotherPage *ui;
};

#endif // SECDIALOG_H
