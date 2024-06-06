#include <iostream>
using namespace std;

class Maths{
    public:
    void operation(int a, int b){
        cout<<a+b<<endl;
    }
    
    void operation(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
    
    void operation(int a, float b){
        cout<<a*b<<endl;
    }
    
    void operation(float a, float b){
        cout<<a*b<<endl;
    }
};      


int main()
{
    Maths m;
    m.operation(1,4);
    m.operation(2,4,6);
    m.operation(3,3.4f);
    m.operation(2.5f,2.5f);
    
    return 0;
}
