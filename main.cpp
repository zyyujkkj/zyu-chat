#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include "global.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/style/stylesheet.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("open success");
        QString style = QLatin1String(qss.readAll());//转换类型
        a.setStyleSheet(style);
        qss.close();
    }else{
        qDebug("Open failed");
    }

    //读配置
    QString fileName = "config.ini";
    QString app_path = QCoreApplication::applicationDirPath();//获取应用执行的目录
    QString config_path = QDir::toNativeSeparators(app_path + QDir::separator() + fileName);
    QSettings settings(config_path, QSettings::IniFormat);//读取路径
    QString gate_host = settings.value("GateServer/host").toString();
    QString gate_port = settings.value("GateServer/port").toString();
    gate_url_prefix = "http://" + gate_host + ":" + gate_port;


    //在show之前用qss修改样式
    MainWindow w;
    w.show();
    return a.exec();
}
