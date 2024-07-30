#include<iostream>

using namespace std;

class Array{
    private:
    int * arr;
    int size;
    int length;
    public:
    Array(int s) : size(s),length(0){
        arr = new int[size];
    }
    void display(){
        for (int i = 0; i < length; i++){
            cout << arr[i] << endl;
        }
    }
    void append(int x){
        if (size > length){
            arr[length] = x;
            length++;
        }
        else cout << "insufficient size" << endl;
    }
    int reverse(){
        for (int i = 0; i < length/2; i++){
            int temp = arr[i];
            arr[i] = arr[length - i - 1];
            arr[length - i - 1] = temp;  
        }
    }
    
    int Lshift(){
        for (int i = 1; i < length; i++){
            arr[i - 1] = arr[i];
        }
        arr[length - 1] = 0;
    }
    int LRotate(){
        int temp = arr[length - 1];
        for (int i = length - 2; i >= 0; i--){
            arr[i + 1] = arr[i];
        }
        arr[0] = temp;
    }
};

int main(int argc, char const *argv[])
{
    Array myarray(10);
    myarray.append(3);
    myarray.append(4);
    myarray.append(5);
    myarray.append(6);
    myarray.append(7);
    myarray.reverse();
    myarray.Lshift();
    myarray.LRotate();
    myarray.display();
    return 0;
}
