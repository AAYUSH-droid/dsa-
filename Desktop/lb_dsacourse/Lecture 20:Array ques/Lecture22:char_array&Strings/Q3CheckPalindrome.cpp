#include<iostream>
using namespace std;

char toLowercase(char ch)
{
    if(ch >='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

bool check(char name[] , int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(     toLowercase (name[s]) !=    toLowercase(name[e]) )
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;


}

void reverse(char name[] ,int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++] , name[e--]);
    }
}

int getLength(char name[])
{
    int count=0;
    
    
    for(int i = 0; name[i] != '\0' ; i++)
    {
        count++;
    }
    return count;
}
int main(){
    
    char name[20];
   
    cin>>name;
    

   int len = getLength(name);
   cout<<"length is: "<<len;

   reverse(name , len);
   cout<<endl; 
   cout<< "Reverse: "<<name <<" ";

    cout<<endl;
   cout<<"Palindrome or not: "<<check(name,len);

    return 0;
}