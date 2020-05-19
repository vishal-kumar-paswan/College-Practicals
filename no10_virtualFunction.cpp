#include <iostream>
using namespace std;

class baseClass
{
public:
    void display1(void)
    {
        cout << "Base class 1" << endl;
    }
    virtual void display2(void)
    {
        cout << "Base class 2" << endl;
    }
};

class derivedClass : public baseClass
{
    void display1(void)
    {
        cout << "Derived class 1" << endl;
    }
    void display2(void)
    {
        cout << "Derived class 2" << endl;
    }
};

int main()
{
    baseClass obj, *pointObj;
    derivedClass obj1;
    cout << "---pointObj points to Base---" << endl;
    pointObj = &obj;
    pointObj->display1();
    pointObj->display2();
    cout << "---pointObj points to Derived---" << endl;
    pointObj = &obj1; //pointing derived class
    pointObj->display1();
    pointObj->display2();
    return 0;
}