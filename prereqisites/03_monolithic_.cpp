#include<iostream>
#include<cmath>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle * initialize(int l,int b){
    struct Rectangle * r;
    r->length = l;
    r->breadth = b;
    return r;
}

int Area(struct Rectangle * r){
    int area = r->length * r->breadth;
    return area;
}

int perimeter(struct Rectangle * r){
    int perimeter = 2*(r->length + r->breadth);
    return perimeter;
}

int main(int argc, char const *argv[])
{
    struct Rectangle * ptr = initialize(3,4);
    int x = Area(ptr);
    int y = perimeter(ptr);
    cout << "the area and perimeter of the triangle and its perimeter respectively are "<< x <<" and "<< y<< endl;;
    return 0;
}
