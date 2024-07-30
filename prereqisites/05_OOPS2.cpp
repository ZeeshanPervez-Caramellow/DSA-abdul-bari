#include<iostream>
using namespace std;
class Parent
{
private:
    int x;
public:
    int y;
protected:
    int z;
};

class child1 : public Parent{
    //x will not be acessed
    //y will be public
    //z will remain protected
};

class child2 : private Parent{
    //x will not be acessed
    //y will be private
    //z is private
};

class child3 : private Parent{
    //y will be protected
    //x will be inacessible
    //z will be protected
};

