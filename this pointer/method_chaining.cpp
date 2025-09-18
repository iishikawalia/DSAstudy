//This program demonstrates method chaining in C++ using the this pointer.
#include <iostream>
using namespace std;

class Example
{
    int x;

public:
    Example(int x) { this->x = x; }
    Example &setX(int x)//here if we don't use & then setX function will return a copy of x, not the object x itself, so when we do obj.setX(10).setX(20) then setX(20) would change the value of that copoy to 20 , not the value of object itself
    {
        this->x = x;
        return *this; //By returning *this (the current object reference) from a member function, we can call multiple functions on the same object in a single statement.
    }

    void show()
    {
        cout << "x = " << this->x << endl;
    }
};

int main()
{
    Example obj(5);
    obj.setX(10).setX(20);//works because setX returns a reference to the object itself (*this), allowing another setX to be invoked immediately on the same object.
    obj.show();
    return 0;
}
