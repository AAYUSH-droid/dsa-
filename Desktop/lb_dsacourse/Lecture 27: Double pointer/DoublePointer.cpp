#include<iostream>
using namespace std;

void update(int **p2)
{
    // p2 =p2+1; /*--------->NO CHANGE*/
    // *p2 = *p2 +1;  /* only p changes */
    // **p2 = **p2 +1;  i changes
}
int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    // cout << "Printing p " << p <<endl;
    // cout << "address of p " << &p << endl;

    // cout << "value in p2 "<< *p2 <<endl <<endl <<endl;
    
    // cout << "ways to print value at i" << endl;
    // cout << i << endl;
    // cout << *p <<endl; 
    // cout << **p2 <<endl;

    // cout<<endl;
    // cout << "ways to print value of pointer p / which is also address of i // which is also value of p2" <<endl;
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 <<endl;

    // cout<<endl;
    // cout << "vlaue of p2 / which is also address of p" <<endl;
    // cout << &p <<endl;
    // cout << p2 <<endl; 

    cout <<"Before " << i <<endl;
    cout <<"Before " << p <<endl;
    cout <<"Before " << p2 <<endl;

    update(p2); cout<<endl;

    cout <<"After " << i <<endl;
    cout <<"After " << p <<endl;
    cout <<"After " << p2 <<endl;
    return 0;
}