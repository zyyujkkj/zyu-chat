#include "listitembase.h"
#include <QStyleOption>
#include <QPainter>


ListItemBase::ListItemBase(QWidget *parent) : QWidget(parent)
{

}

void ListItemBase::SetItemType(ListItemType itemType)
{
    _itemType = itemType;
}

ListItemType ListItemBase::GetItemType()
{
    return _itemType;
}

void ListItemBase::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;//定义一个样式选项
    opt.initFrom(this);//执行样式初始化把窗口和样式绑定
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
