#include<iostream>
using namespace std;

class Array{
    private:
    int size;
    int length;
    int * arr;
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
    Array Merge(Array &arr2){
        Array  arr3(length + arr2.length); 
        int i = 0,j = 0,k = 0;
        while (i < length && j < arr2.length){
            if (arr[i] < arr2.getArr()[j]){
                arr3.getArr()[k] = arr[i];
                i++;
                k++;
            }
            else{
                arr3.getArr()[k] = arr2.getArr()[j];
                j++;
                k++;
            }
        }
        for (; i < length; i++){
            arr3.getArr()[k] = arr[i];
            k++;
        }
        for (; j < arr2.length; j++){
            arr3.getArr()[k] = arr2.getArr()[j];
            k++;
        }
        arr3.length = k;
        return arr3;
    }
    // Getter function for arr
    int* getArr() const {
        return arr;
    }

    // Getter function for length
    int getLength() const {
        return length;
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

    cout << "Array 1:" << endl;
    arr1.display();

    cout << "Array 2:" << endl;
    arr2.display();

    Array arr3 = arr1.Merge(arr2);
    cout << "Merged Array:" << endl;

    // Accessing the merged array using the getter function
    int* mergedArr = arr3.getArr();
    for (int i = 0; i < arr3.getLength(); i++) {
        cout << mergedArr[i] << " ";
    }

    return 0;
}