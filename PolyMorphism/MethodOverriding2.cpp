#include <iostream>
using namespace std;

class Animal{
    public:
    void voice(){
        cout<<"Animal makes sound"<<endl;
    }
};      

class Dog : public Animal{
     public:
        void voice(){
            cout<<"Bark"<<endl;
        }
};

class Cat : public Animal{
     public:
        void voice(){
            cout<<"Meow"<<endl;
        }
};

int main()
{
    cout<<"Animal"<<endl;
    Animal animal;
    animal.voice();
    
    cout<<endl<<"Dog"<<endl;
    Dog dog;
    dog.voice();
    
    cout<<endl<<"Cat"<<endl;
    Cat cat;
    cat.voice();
    
    return 0;
}
