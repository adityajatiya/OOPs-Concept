#include <iostream>
using namespace std;

class Mobile
{
public:
    void camera()
    {
        cout << "12MP" << endl;
    }
};

class NewMobile : public Mobile
{
public:
    void camera()
    {
        cout << "Camera = 48MP" << endl;
    }
};

int main()
{
    cout << "In Mobile" << endl;
    Mobile m;
    m.camera();

    cout << endl
         << "In New Mobile" << endl;
    NewMobile m1;
    m1.camera();

    return 0;
}
