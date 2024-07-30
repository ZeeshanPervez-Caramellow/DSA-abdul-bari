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
    void insert(int val){
        int i = length -1;
        while (arr[i]>val){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = val;
        length++;
    }
    int IfSorted(){
        int sorted = 1;
        for (int i = 0; i < length - 1; i++){
            if(arr[i + 1] < arr[i]){
                int sorted = 0;
                break;
            } 
        }
        return sorted;
    }
    void func(){
        int i,j;
        i = 0;
        j = length - 1;
        int temp;
        while(i < j){
            while(arr[i] < 0){i++;}
            while(arr[j] > 0){j--;}
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
};
int main(int argc, char const *argv[])
{
    Array myArray(10);
    myArray.append(1);
    myArray.append(2);
    myArray.append(3);
    myArray.append(4);
    myArray.append(5);
    myArray.append(7);
    myArray.append(8);
    myArray.append(9);
    myArray.insert(6);
    cout << myArray.IfSorted() << endl;
    myArray.display();
    return 0;
}
