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
            cout << arr[i] << " " << endl;
        }   
    }
    void append(int x){
        if (size > length){
            arr[length] = x;
            length++;
        }
        else cout << "insufficient size" << endl;
    }
    void insert(int index,int val){
        for (int i = length - 1; i >= index; i--){
            arr[i + 1] = arr[i];
        }
        arr[index] = val;
        length++;
    }
    void del(int index){
        for (int i = index; i < length; i++){
            arr[i] = arr[i+1];
        }
        length--;
    }
    int LSearch(int val){
        for (int i = 0; i < length; i++)if (arr[i] == val)return i;
        return -1;
    }
    int BSearch(int val){
        int low = 0;
        int high = length - 1;
        int mid = low + (high - low)/2; 
        while(low < high){
            if(arr[mid]>val) high = mid - 1;
            else if(arr[mid]<val)low = mid + 1;
            else if(arr[mid] == val)return mid;
            return -1;
        }
    }
    int Get(int index){
        return arr[index];
    }
    int set(int index,int val){
        arr[index] = val;
    }
    int Max(){
        int max = arr[0];
        for (int i = 1; i < length; i++){
            if (arr[i] > max){
                max = arr[i];
            }
        }
        return max;
    }
    int average(){
        int sum = 0;
        for (int i = 0; i < length; i++)sum = sum + arr[i];
        return sum/length;   
    }
    ~Array(){
        delete[] arr;
    }
};


int main(){
    Array myArray(10);
    myArray.append(12);
    myArray.append(14);
    myArray.append(16);
    //myArray.insert(1,23);
    //myArray.insert(2,15);
    //myArray.del(0);
    //myArray.del(3);
    //cout << myArray.LSearch(15) << endl;
    myArray.display();
    cout << myArray.BSearch(14) << endl;

    return 0;
}
