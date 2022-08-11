#include<iostream>
using namespace std;


int getSum (int *arr , int n)
{
    int sum = 0;
    for(int i = 0 ; i < n ;i++)
    {
        sum += arr[i];
    }
    return sum;
}
// void update2(int& n )
// {
//     n++;
// }

// void update1(int n )
// {
//     n++;
// }
int main(){
    
    /*
    int i = 5;
    //creating a ref variable
    int& j = i;
    cout << i <<endl;
    i++;
    cout << i <<endl;
    j++;
    cout << i <<endl;
    */

//    int n = 5;
//    cout<< "Before " << n <<endl;
//    update2(n);
//    cout<< "after " << n <<endl;

    int n;
    cin >> n;

    //creating a variable size array
    int* arr = new int[n];

    //taking input
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout << "Answer is " << ans <<endl;


    return 0;
}