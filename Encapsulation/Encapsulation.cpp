#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;
    string gender;

public:
    void setName(string newName)
    {
        name = newName;
    }

    string getName()
    {
        return name;
    }

    void setAge(int newAge)
    {
        age = newAge;
    }

    int getAge()
    {
        return age;
    }

    void setGender(string newGender)
    {
        gender = newGender;
    }

    string getGender()
    {
        return gender;
    }
};

int main()
{
    Person p;
    p.setName("Aditya");
    cout << p.getName() << endl;

    p.setAge(19);
    cout << p.getAge() << endl;

    p.setGender("Male");
    cout << p.getGender() << endl;
    return 0;
}
