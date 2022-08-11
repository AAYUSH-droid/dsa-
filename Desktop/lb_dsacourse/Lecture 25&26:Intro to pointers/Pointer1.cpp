#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int num = 5;
    // cout << num << endl;

    // //Address of operator - &
    // cout << "Address of num is: "<< &num << endl;

    // //pointer

    // int *ptr = &num;
    // cout << " value is: " << *ptr <<endl;
    // cout << " Address is: " << ptr <<endl;
    // cout<<endl;

    // double d = 10.6;
    // cout << d << endl;

    // cout << &d;

    // double *p2 = &d;
    // cout<<endl;
    // cout << " value is: " << *p2 <<endl;
    // cout << " Address is: " << p2 <<endl;

    // cout<<"Size of integer is: "<< sizeof(num) << endl;
    // cout<<"Size of pointer is: "<< sizeof(ptr) << endl;
    // cout<<"Size of pointer is: "<< sizeof(p2) << endl;

    int num = 5;
    int *p = &num;
    cout << " before " << num << endl;

    (*p)++;
    cout << "after " << num << endl;

    // copying a pointer

    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;
    cout << endl;

    int i = 3;
    int *t = &i;
    (*t)++;
    cout << *t << endl;

    cout << " before t " << t << endl;
    t = t + 1;

    cout << "after t " << t << endl;
    return 0;
}