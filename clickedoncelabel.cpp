#include "clickedoncelabel.h"


ClickedOnceLabel::ClickedOnceLabel(QWidget *parent):QLabel(parent)
{
    setCursor(Qt::PointingHandCursor);//滑上来鼠标变手指
}

void ClickedOnceLabel::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        emit clicked(this->text());//如果是鼠标左键就发送这个消息
        return;
    }
    // 调用基类的mousePressEvent以保证正常的事件处理
    QLabel::mousePressEvent(event);
}

