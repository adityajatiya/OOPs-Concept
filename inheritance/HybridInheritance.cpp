#include <iostream>
using namespace std;

class SuperParent
{
public:
    void A()
    {
        cout << "This is SuperParent method A" << endl;
    }
};

class Parent1 : public SuperParent
{
public:
    void B()
    {
        cout << "This is SuperParent method A" << endl;
    }
};

class Parent2 : public SuperParent
{
public:
    void C()
    {
        cout << "This is SuperParent method A" << endl;
    }
};

class Child : public Parent1, public Parent2
{
};

int main()
{
    Child child;
    child.A();
    child.B();
    child.C();

    return 0;
}
