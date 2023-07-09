#include <bits/stdc++.h>
using namespace std;

/*classparent_class{ 

    //Body of parent class 

}; 
classchild_class: access_modifier parent_class
{ 
    //Body of child class 

};*/

class Vehical{
    public:
    void show()
    {
        cout<<"Base class function is called"<<endl;
    }
};

class car:public Vehical
{
    public:
    void show1()
   { 
      cout << "Derived class function is called"<<endl;
   }
};

int main()
{
    Vehical v;
    v.show();

    car c;
    c.show(); // Base class show is called
    c.show1();  

}