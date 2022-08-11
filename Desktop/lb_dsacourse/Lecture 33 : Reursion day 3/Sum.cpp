#include<iostream>
using namespace std;

int getSum(int *arr , int size)
{
    //base case
    if(size == 0)
    {
        return 0;
    }

    if(size==1)
    {
        return arr[0];
    }

    int remaningPart = getSum(arr+1 , size-1);
    int sum = remaningPart + arr[0];
    return sum;
}




int main(){
    int arr[5] = {2,4,9,9,9};
    int size = 5;

    int ans = getSum(arr , size);

    cout << "The sum of array is " << ans << endl;

    return 0;
}