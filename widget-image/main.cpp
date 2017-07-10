#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <QFileInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget *widget = new QWidget();
    QLabel *label = new QLabel("TEST LABEL");
    label->setParent(widget);
    label->grab().save(QFileInfo(".").absolutePath() + "/qt.widget.screen.jpg");

    exit(0);
    return a.exec();
}
