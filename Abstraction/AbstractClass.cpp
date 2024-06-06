#include <iostream>
using namespace std;

class Animal{
    public:
    void virtual name() = 0;
    void virtual voice() = 0;
};      

class Dog : public Animal{
    public:
    void virtual name(){
        cout<<"My name is Dog"<<endl;
    }
    
    void virtual voice(){
        cout<<"Dog can bark"<<endl;
    }
};   

class Cat : public Animal{
    public:
    void virtual name(){
        cout<<"My name is Cat"<<endl;
    }
    
    void virtual voice(){
        cout<<"Cat can meow"<<endl;
    }
};   

int main()
{
    Dog d;
    d.name();
    d.voice();
    
    Cat c;
    c.name();
    c.voice();
    return 0;
}
