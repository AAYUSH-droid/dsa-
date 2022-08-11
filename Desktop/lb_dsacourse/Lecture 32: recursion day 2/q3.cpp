#include<iostream>
using namespace std;

void f(int i , int sum)
{
    if (i<1)
    {
        cout << sum;
        return ; 
    }
    f(i-1,sum+1);
}


int main(){
    int i;
    cin >> i;

    int sum =0;
    f(i,0);
    return 0;
}