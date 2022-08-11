#include <iostream>
using namespace std;

//class defined
class Hero
{

private:
    int health;

public:
 
    char * name;
    char Level;

    Hero()
    {
        cout << "Constructor called" << endl;
        name = new  char [100];
    }
    
    //copy constructor
    Hero(Hero& temp)
    {   
        cout << "Copy Constructor called" << endl;
       this -> health = temp.health;
       this -> Level = temp.Level;
    }
    
    //Parameterised Constructor
    Hero(int health, char Level)
    {
        this->Level = Level;
        this->health = health;
    }

   

    void print()
    {   
         cout << "health " << this -> health << endl;
        cout << "level" << this -> Level << endl;
        // cout << this->Level << endl;
        // cout << this->health << endl;
    }




    //getter && setter
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return Level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        Level = ch;
    }
    void setname(){
        strcpy(this -> name, name);
    }
};

int main()
{
    // Hero hero1;
    // hero1.sethealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Babbar";
    // hero1.setname(name)
    
    
    
    
    
    
    
    // Hero s(70 , 'C');
    // s.print();
    

    //  //copy constructor
    // Hero r(s);
    // r.print();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //object created satically
    // Hero ramesh(70 , 'C');
    // ramesh.print();

    //dynamically
    // Hero *h = new Hero;

    /*
    //creating object
    // Hero suresh;

    // cout << suresh.getHealth() <<endl;

    // suresh.setHealth(100);
    // suresh.Level = 'A';

    // cout <<  "health is " << suresh.getHealth() << endl;
    // cout <<  "level is " << suresh.Level << endl;

    //static allocation
    Hero a;
    a.setLevel('A');
    cout << "Level is " << a.Level << endl;
    a.setHealth(100);
    cout << "Health is " << a.getHealth() << endl;
    cout << endl;
    cout << endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setLevel('C');
    cout << "Level is" << b->Level << endl;

    b->setHealth(90);
    cout << "health is" << b->getHealth() << endl;

    */

    return 0;
}