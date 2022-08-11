
/* function overloading */

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void sayHello()
//     {
//         cout << "Hello bro" << endl;
//     }
//     void sayHello(string name)
//     {
//         cout << "Hello" << name << endl;
//     }
//     int sayHello(string name ,int n)
//     {
//         cout << "Hello" << name << endl;
//         return n;
//     }

// };

// int main()
// {
//     A obj;
//     obj.sayHello();
//     return 0;
// }

/* operator overloading */


#include<iostream>
using namespace std;

class A{

    public:

    int a;
    int b;
    void operator+ (A &obj)
    {
        int val1 = this -> a;
        int val2 = obj.a;
        cout << "output" << val1 - val2;
    }



};


int main(){
    A obj1 , obj2;
    obj1.a= 4;
    obj2.a= 7;

    obj1+obj2;
    return 0;
}