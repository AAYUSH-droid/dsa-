#include<iostream>
using namespace std;

bool isPresent(int arr[][3] , int target , int row , int col)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;

}

void printSum(int arr[][3] , int row , int col)
{
    for(int i = 0; i<3; i++)
    {   
        int sum=0;
        for(int j=0; j<3; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" "<<endl;
    }
    cout<<endl;
}

int main(){
    int arr[3][3];
    
    //row wise input
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

     //coloumn wise input
    // for(int i=0; i<4; i++)
    // {
    //     for(int j=0; j<3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    cout<<endl;

    //print
    for(int i=0; i<3; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout<<endl;
    }

    cout << "Enter the element to search " << endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,3))
    {
        cout<<"element found "<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }

    printSum(arr , 3,3);

    return 0;
}