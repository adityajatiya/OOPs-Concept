#include <iostream>
using namespace std;

class Mobile{
    public:
    void camera(){
        cout<<"this is camera"<<endl;
    }
    
    void storage(){
        cout<<"this is storage"<<endl;
    }
    
    void ram(){
        cout<<"this is ram"<<endl;
    }
    
    void battery(){
        cout<<"this is battery"<<endl;
    }
    
    void operatingSystem(){
        cout<<"this is OS"<<endl;
    }
    
    void charger(){
        cout<<"this is charger"<<endl;
    }
    
    void price(){
        cout<<"this is price"<<endl;
    }
};      

class iPhone : public Mobile{
     public:
        void camera(){
            cout<<"Camera = 12MP"<<endl;
        }
    
        void storage(){
            cout<<"Storage = 128GB"<<endl;
        }
        
        void ram(){
            cout<<"Ram = 4GB"<<endl;
        }
        
        void battery(){
            cout<<"Battery = 3500MAh"<<endl;
        }
        
        void operatingSystem(){
        cout<<"IOS"<<endl;
        }
        
        void charger(){
            cout<<"Lightning Charger"<<endl;
        }
        
        void price(){
            cout<<"Price = 100000$"<<endl;
        }
};

class Android : public Mobile{
     public:
        void camera(){
            cout<<"Camera = 108MP"<<endl;
        }
    
        void storage(){
            cout<<"Storage = 1TB"<<endl;
        }
        
        void ram(){
            cout<<"Ram = 8GB"<<endl;
        }
        
        void battery(){
            cout<<"Battery = 6000MAh"<<endl;
        }
        
        void operatingSystem(){
        cout<<"Android"<<endl;
        }
        
        void charger(){
            cout<<"C Type Charger"<<endl;
        }
                
        void price(){
            cout<<"Price = 10000₹"<<endl;
        }
};

int main()
{
    cout<<"In Mobile"<<endl<<endl;
    
    Mobile m;
    m.camera();
    m.storage();
    m.ram();
    m.battery();
    m.charger();
    m.operatingSystem();
    m.price();
    
    cout<<endl<<"In IPhone"<<endl<<endl;
    
    iPhone m1;
    m1.camera();
    m1.storage();
    m1.ram();
    m1.battery();
    m1.charger();
    m1.operatingSystem();
    m1.price();
    
    cout<<endl<<"In Android"<<endl<<endl;
    
    Android m2;
    m2.camera();
    m2.storage();
    m2.ram();
    m2.battery();
    m2.charger();
    m2.operatingSystem();
    m2.price();
    
   
    return 0;
}
