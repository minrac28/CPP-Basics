#include <iostream>
using namespace std;
class practice // base class
{
private:
    int sum, diff;

public:
    practice()
    {
        sum = 10;
        diff = 10;
        cout << "inside constructor" << endl;
    }
     virtual ~practice(){
        cout<<"reached destructor"<<endl;
    }
    virtual void ab()
    {
        cout << "inside base class A" << endl;
    }
    void tum()
    {
        cout << "tum" << endl;
    }
    void hum()
    {
        cout << "hum" << endl;
    }
};

class B : public practice
{
public:
    B()
    {
        cout << "inside dervived class constructor" << endl;
    }
    ~B ()
    {
        cout << "inside dervived class constructor" << endl;
    }
    void ab()
    {
        cout << "inside dervived class B" << endl;
    }
    void hum()
    {
        cout << "hum from dervived class" << endl;
    }
};

class C : public B
{
public:
    void ab()
    {
        cout << "inside dervived class C" << endl;
    }
};

int main()
{
    practice a;
    practice *aptr;
    aptr = &a;
    aptr->ab();

    B b;
    aptr = &b;
    aptr->ab();
    aptr->tum();
    // b.hum();

    C c;
    aptr = &c;
    aptr->ab();  // invoke ab of drived class C since adrees of object of C is pointed to pointer of the base class.
    aptr->hum(); // invoke hum of base class Practice
    c.hum();     // invoke hum of derived class B

    return 0;
}