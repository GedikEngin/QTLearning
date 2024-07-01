#include <QCoreApplication>
#include <QDebug>

void test()
{
    int number = 50;
    qInfo() << "test number is at " << &number;
    // pointer to the location of memory where number in this function scope is stored
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 50;

    qInfo() << "test number is " << &number;
    // will give a different memory location to the number variable in the test function
    // the scope changes with every function
    // to use the same memory address you need to pass it using by ref, void test(&num)

    test();

    return a.exec();
}
