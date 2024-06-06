#include <iostream>
using namespace std;

class Parent1
{
public:
    void A()
    {
        cout << "this is Parent1 method A" << endl;
    }
};

class Parent2
{
public:
    void B()
    {
        cout << "this is Parent2 method B" << endl;
    }
};

class Parent3
{
public:
    void C()
    {
        cout << "this is Parent3 method C" << endl;
    }
};

class Child : public Parent1, public Parent2, public Parent3
{
};

int main()
{
    Child m;
    m.A();
    m.B();
    m.C();

    return 0;
}
