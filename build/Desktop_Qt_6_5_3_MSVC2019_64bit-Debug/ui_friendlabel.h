/********************************************************************************
** Form generated from reading UI file 'friendlabel.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLABEL_H
#define UI_FRIENDLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <clickedlabel.h>

QT_BEGIN_NAMESPACE

class Ui_FriendLabel
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *tip_lb;
    QWidget *close_wid;
    QHBoxLayout *horizontalLayout_2;
    ClickedLabel *close_lb;

    void setupUi(QWidget *FriendLabel)
    {
        if (FriendLabel->objectName().isEmpty())
            FriendLabel->setObjectName("FriendLabel");
        FriendLabel->resize(400, 43);
        FriendLabel->setMinimumSize(QSize(0, 43));
        FriendLabel->setMaximumSize(QSize(16777215, 43));
        horizontalLayout = new QHBoxLayout(FriendLabel);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tip_lb = new QLabel(FriendLabel);
        tip_lb->setObjectName("tip_lb");

        horizontalLayout->addWidget(tip_lb);

        close_wid = new QWidget(FriendLabel);
        close_wid->setObjectName("close_wid");
        close_wid->setMinimumSize(QSize(25, 25));
        close_wid->setMaximumSize(QSize(25, 25));
        horizontalLayout_2 = new QHBoxLayout(close_wid);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        close_lb = new ClickedLabel(close_wid);
        close_lb->setObjectName("close_lb");
        close_lb->setMinimumSize(QSize(15, 15));
        close_lb->setMaximumSize(QSize(15, 15));
        close_lb->setStyleSheet(QString::fromUtf8("border-image:url(:/res/tipclose.png);"));

        horizontalLayout_2->addWidget(close_lb);


        horizontalLayout->addWidget(close_wid);


        retranslateUi(FriendLabel);

        QMetaObject::connectSlotsByName(FriendLabel);
    } // setupUi

    void retranslateUi(QWidget *FriendLabel)
    {
        FriendLabel->setWindowTitle(QCoreApplication::translate("FriendLabel", "Form", nullptr));
        tip_lb->setText(QCoreApplication::translate("FriendLabel", "TextLabel", nullptr));
        close_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendLabel: public Ui_FriendLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLABEL_H
