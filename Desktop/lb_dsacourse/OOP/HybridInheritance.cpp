#include <iostream>
using namespace std;

class A
{
public:
    void function1()
    {
        cout << "inside function 1" << endl;
    }
};

class D
{
public:
    void function3()
    {
        cout << "inside function 3" << endl;
    }
};

class B : public A
{
public:
    void function2()
    {
        cout << "inside function 2" << endl;
    }
};

class C : public A, public D
{
public:
    void function4()
    {
        cout << "inside function 4" << endl;
    }
};

int main()
{

    A obj1;
    obj1.function1();

    cout << endl;

    B obj2;
    obj2.function1();
    obj2.function2();

    cout << endl;

    D obj3;
    obj3.function3();
    cout << endl;

    C obj4;
    obj4.function4();
    obj4.function1();
    obj4.function3();
    cout << endl;

    return 0;
}