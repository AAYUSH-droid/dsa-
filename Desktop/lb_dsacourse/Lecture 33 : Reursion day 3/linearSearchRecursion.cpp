#include<iostream>
using namespace std;


bool linearSearch(int arr[] , int size , int key)
{
    //base case
    if(size == 0)
    {
        return false;
    }

    if(arr[0] == key)
    {
        return true;
    }

    else{ 
    int remaningArray = linearSearch(arr+1 , size-1 , key);
    return remaningArray;
    }


}



int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 3;

    int ans = linearSearch(arr,size,key);
    cout << endl << endl;
    
    if(ans)
    {
        cout <<"element is present" <<endl;
    }
    else{
        cout<<"element is absent" << endl;
    }   
    cout << endl;


    return 0;
}