#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal{

};

class GermanSpherad : public Dog{

};


int main(){
    GermanSpherad g;
    g.speak();
    return 0;
}