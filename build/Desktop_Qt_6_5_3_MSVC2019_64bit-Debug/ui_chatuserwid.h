/********************************************************************************
** Form generated from reading UI file 'chatuserwid.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATUSERWID_H
#define UI_CHATUSERWID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatUserWid
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *icon_wid;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon_lb;
    QWidget *user_info_wid;
    QVBoxLayout *verticalLayout;
    QLabel *user_name_lb;
    QLabel *user_chat_lb;
    QWidget *time_wid;
    QLabel *time_lb;

    void setupUi(QWidget *ChatUserWid)
    {
        if (ChatUserWid->objectName().isEmpty())
            ChatUserWid->setObjectName("ChatUserWid");
        ChatUserWid->resize(400, 70);
        ChatUserWid->setMinimumSize(QSize(0, 70));
        ChatUserWid->setMaximumSize(QSize(16777215, 70));
        horizontalLayout = new QHBoxLayout(ChatUserWid);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(6, 2, 6, 2);
        icon_wid = new QWidget(ChatUserWid);
        icon_wid->setObjectName("icon_wid");
        icon_wid->setMinimumSize(QSize(50, 50));
        icon_wid->setMaximumSize(QSize(50, 50));
        horizontalLayout_2 = new QHBoxLayout(icon_wid);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        icon_lb = new QLabel(icon_wid);
        icon_lb->setObjectName("icon_lb");
        icon_lb->setMinimumSize(QSize(45, 45));
        icon_lb->setMaximumSize(QSize(45, 45));

        horizontalLayout_2->addWidget(icon_lb);


        horizontalLayout->addWidget(icon_wid);

        user_info_wid = new QWidget(ChatUserWid);
        user_info_wid->setObjectName("user_info_wid");
        user_info_wid->setMaximumSize(QSize(130, 16777215));
        verticalLayout = new QVBoxLayout(user_info_wid);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        user_name_lb = new QLabel(user_info_wid);
        user_name_lb->setObjectName("user_name_lb");

        verticalLayout->addWidget(user_name_lb);

        user_chat_lb = new QLabel(user_info_wid);
        user_chat_lb->setObjectName("user_chat_lb");
        user_chat_lb->setMaximumSize(QSize(130, 16777215));

        verticalLayout->addWidget(user_chat_lb);


        horizontalLayout->addWidget(user_info_wid);

        time_wid = new QWidget(ChatUserWid);
        time_wid->setObjectName("time_wid");
        time_wid->setMinimumSize(QSize(50, 50));
        time_wid->setMaximumSize(QSize(50, 50));
        time_lb = new QLabel(time_wid);
        time_lb->setObjectName("time_lb");
        time_lb->setGeometry(QRect(-20, 20, 69, 19));
        time_lb->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(time_wid);


        retranslateUi(ChatUserWid);

        QMetaObject::connectSlotsByName(ChatUserWid);
    } // setupUi

    void retranslateUi(QWidget *ChatUserWid)
    {
        ChatUserWid->setWindowTitle(QCoreApplication::translate("ChatUserWid", "Form", nullptr));
        icon_lb->setText(QString());
        user_name_lb->setText(QCoreApplication::translate("ChatUserWid", "zyu", nullptr));
        user_chat_lb->setText(QCoreApplication::translate("ChatUserWid", "hahahahaha", nullptr));
        time_lb->setText(QCoreApplication::translate("ChatUserWid", "11:42", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatUserWid: public Ui_ChatUserWid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATUSERWID_H
