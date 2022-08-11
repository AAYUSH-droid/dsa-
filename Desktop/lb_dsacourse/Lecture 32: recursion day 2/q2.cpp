//pint 1-N using recursion

#include<iostream>
using namespace std;

void f(int i , int n)
{
    if(i > n)
    {
        return;
    }
 
    cout << i << endl;
     f(i+1,n);

    
}
int main(){
    int i;
    cin >> i;

    int n;
    cin >> n;

    cout<<endl;
    f(i,n);
    return 0;
}