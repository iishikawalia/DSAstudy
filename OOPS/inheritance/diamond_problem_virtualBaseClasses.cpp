#include <iostream>
using namespace std;
//In hybrid inheritance, the diamond problem occurs because two parent classes inherit from the same base, creating multiple copies of base members.
//By using virtual base classes, only one shared copy of the base class is inherited, removing ambiguity and making access unambiguous.
class base {
public:
    int i;
};

// derived1 inherits base virtually
class derived1 : virtual public base {
public:
    int j;
};

// derived2 inherits base virtually
class derived2 : virtual public base {
public:
    int k;
};

// derived3 inherits from both derived1 and derived2
class derived3 : public derived1, public derived2 {
public:
    int sum;
};

int main() {
    derived3 ob;
    ob.i = 10;   // unambiguous because of virtual base
    ob.j = 20;
    ob.k = 30;
    ob.sum = ob.i + ob.j + ob.k;

    cout << ob.i << " " << ob.j << " " << ob.k << " " << ob.sum;
    return 0;
}
