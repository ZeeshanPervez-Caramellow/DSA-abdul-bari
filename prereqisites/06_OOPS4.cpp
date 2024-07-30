//a sample code created that showcases objected oriented programming
#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
        string name;
        shape(string x){
            name = x;
        }
};
class square : public shape{
    public:
        int sideLength;
        square(int x,string name):shape(name){
            sideLength = x;
        }
        int area(){
            return sideLength * sideLength;
        }
};
class circle : public shape{
    public:
        int radius;
        circle(int x,string name) : shape(name){
            radius = x;
        }
        float area(){
            return radius * radius * (22.0/7.0);
        }
};
class rectangle : public shape{
    public:
        int len;
        int breadth;
        rectangle(int x,int y,string name) : shape(name){
            int len = x;
            int breadth = y;
        }
        int area(rectangle r){
            return len * breadth;
        }
};
int main(int argc, char const *argv[])
{
    square s(2,"square");
    int a = s.area();
    cout << "the area of the square is " << a << endl;
    return 0;
}
