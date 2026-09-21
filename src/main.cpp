#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("hacker app");

    QLabel label1("hacking so hard rn");
    QPushButton button("hack the mainframe");
    QObject::connect(&button, &QPushButton::clicked, [] {
        qInfo() << "consider your mainframe hacked.";
    });
    QLabel label2("this is almost as dangerous as file explorer");

    QVBoxLayout layout;
    layout.addWidget(&label1, 0, Qt::AlignHCenter);
    layout.addWidget(&button);
    layout.addWidget(&label2, 0, Qt::AlignHCenter);

    window.setLayout(&layout);
    window.show();

    return app.exec();
}