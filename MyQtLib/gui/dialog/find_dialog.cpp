#include <QtGui>
#include <QLabel>
#include <QLayout>
#include "gui/dialog/find_dialog.h"



FindDialog::FindDialog(QWidget *parent):QDialog(parent)
{
    label = new QLabel(tr("&查找内容"));

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(label);

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);

    setLayout(mainLayout);

}

FindDialog::~FindDialog()
{

}
