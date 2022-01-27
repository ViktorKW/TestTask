#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>

#include "unitlist.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    UnitList unitList;

    QQuickView view;
    view.rootContext()->setContextProperty("_unitList", &unitList);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();


    return app.exec();
}
