#include <QCoreApplication>
#include <projD/projd.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ProjD b();
    return a.exec();
}
