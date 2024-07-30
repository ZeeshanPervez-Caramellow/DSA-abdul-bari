#include<iostream>
using namespace std;

class Array{
    private:
    int size;
    int length;
    int * arr;
    public:
    Array(int s) : size(s), length(0){
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
    Array SetUnion(Array &arr2){
        Array arr3(size + arr2.size); // dynamic sizing
        int i = 0, j = 0, k = 0;
        while(i < length && j < arr2.length){
            if (arr[i] < arr2.arr[j]){
                arr3.arr[k++] = arr[i++];
            }
            else if(arr[i] > arr2.arr[j]){
                arr3.arr[k++] = arr2.arr[j++];
            }
            else{
                arr3.arr[k++] = arr[i++];
                j++;
            }
        }
        while (i < length){
            arr3.arr[k++] = arr[i++];
        }
        while (j < arr2.length){
            arr3.arr[k++] = arr2.arr[j++];
        }
        arr3.length = k;
        return arr3;
    }
    Array SetIntersec(Array &arr2){
        Array arr3(size + arr2.size); // dynamic sizing
        int i = 0, j = 0, k = 0;
        while(i < length && j < arr2.length){
            if (arr[i] < arr2.arr[j]){
                arr3.arr[k++] = arr[i++];
            }
            else if(arr[i] > arr2.arr[j]){
                arr3.arr[k++] = arr2.arr[j++];
            }
            else{
                arr3.arr[k++] = arr[i++];
                j++;
            }
        }
        while (i < length){
            arr3.arr[k++] = arr[i++];
        }
        while (j < arr2.length){
            arr3.arr[k++] = arr2.arr[j++];
        }
        arr3.length = k;
        return arr3;
    }
    ~Array(){
        delete[] arr;
    }
};

int main(){
    Array arr1(5);
    arr1.append(1);
    arr1.append(3);
    arr1.append(5);

    Array arr2(5);
    arr2.append(1);
    arr2.append(4);
    arr2.append(6);
    cout << "Array 1: ";
    arr1.display();

    cout << "Array 2: ";
    arr2.display();

    Array arr3 = arr1.SetUnion(arr2);
    cout << "Union Array: ";
    arr3.display();
    
    return 0;
}
