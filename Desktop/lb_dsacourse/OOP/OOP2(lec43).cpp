#include <iostream>
using namespace std;
class human
{
public:
    int height;
    int weight;
    int age;

public:
    int getage()
    {
        return this->age;
    }

    void setweight(int w)
    {
        this->weight = w;
    }
};

class Male : public human
{
public:
    string colour;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main()
{

    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.colour<<endl;

    object1.setweight(85);
    cout<<object1.weight<<endl;

    object1.sleep();

    return 0;
}