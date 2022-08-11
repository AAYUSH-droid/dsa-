#include<iostream>
using namespace std;

void print(int *p)
{
    cout << p <<endl;
}

void update(int *p)
{
    //ADDRESS
   // p = p+1;
    //cout << "inside" << p <<endl; //inside mein it changes address of p , but outside mein it does not
     //VALUE

    *p = *p +1;

}

int main(){

    int value = 5;
    int *p = &value;

    // print(p);


    cout <<" before " << *p <<endl;
    update(p);
    cout <<" after " << *p <<endl;

    return 0;
}