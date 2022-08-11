//print n times using recursion
#include<iostream>
using namespace std;

void f(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"messi" <<endl;
    f(i+1 , n);
}
int main(){
    int n;
    cin >> n;
    int i = 1 ;
    cout << endl;

    f(i,n);
    return 0;
}