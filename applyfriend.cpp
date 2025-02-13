#include "applyfriend.h"
#include "ui_applyfriend.h"

ApplyFriend::ApplyFriend(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ApplyFriend)
{
    ui->setupUi(this);
}

ApplyFriend::~ApplyFriend()
{
    delete ui;
}
