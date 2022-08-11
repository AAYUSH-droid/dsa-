#include<iostream>
using namespace std;
int main(){
   /* int arr[10]={2,5,6,100};
    
    cout << " Address of first memory block of arr is " << arr <<endl;
    cout << " Address of first memory block of arr is " << &arr[0] <<endl;

    cout<< *arr <<endl;                 //2 
    cout << *arr + 1 << endl;           //3
    cout << *(arr + 1) << endl;         //5
    cout << *(arr) + 1 << endl;         //3

    //chalaki 
    int i = 3;
    cout << i[arr] << endl;     //100

    cout<<endl; */


    //Diffrences-->
    //1) sizeof
    /*int temp[10];
    cout << sizeof(temp) <<endl;

    int *ptr = &temp[0];

    cout << sizeof(ptr) <<endl;
    cout << sizeof(*ptr) <<endl;
    */

   //2) Address(&)-
   //    int a[10] ={1,2,3,4} ;

   //    cout << "V" << &a <<endl;

   //    int *p = &a[0] ;
   //    cout << "B" << &p <<endl;
  
   //3)Symbol table-
   int arr[10] = {0};
      //ERROR
   //   arr = arr+1;

   //but in case of ponter

       int *ptr = &arr[0];
         cout<< ptr << endl;

         ptr = ptr + 1; 
         cout << ptr << endl;

    return 0;
}