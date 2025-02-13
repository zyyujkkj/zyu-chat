#ifndef APPLYFRIEND_H
#define APPLYFRIEND_H

#include <QDialog>

namespace Ui {
class ApplyFriend;
}

class ApplyFriend : public QDialog
{
    Q_OBJECT

public:
    explicit ApplyFriend(QWidget *parent = nullptr);
    ~ApplyFriend();

private:
    Ui::ApplyFriend *ui;
};

#endif // APPLYFRIEND_H
