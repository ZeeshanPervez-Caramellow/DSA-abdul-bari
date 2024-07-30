#include <iostream>
using namespace std;

class diagonal {
    private:
        int * arr;
        int d;
    public:
        diagonal(int d);
        void display();
        void set(int i,int j,int val);
        int get(int i,int j);
        ~diagonal();
};

int main() {
    diagonal d(3); // create a 3x3 diagonal matrix

    d.set(1, 1, 5); // set the element at (1, 1) to 5
    d.set(2, 2, 10); // set the element at (2, 2) to 10
    d.set(3, 3, 15); // set the element at (3, 3) to 15

    d.display(); // display the matrix

    return 0;
}

diagonal:: diagonal (int d){
    this->d = d;
    arr = new int[d];
}

void diagonal :: display(){
    for(int i = 0; i < d; i++){
        for(int j = 0; j < d;j++){
            if(i == j) cout << this->arr[i] << " ";
            else cout << 0  << " ";
        }
        cout << endl; 
    }
}

int diagonal :: get(int i,int j){
    if(i == j)cout << this->arr[i - 1] << endl;
    else cout << 0 ;
}

void diagonal :: set(int i,int j,int val){
    if(i == j)this->arr[i - 1] = val;
    else return;
}

diagonal :: ~diagonal(){
    delete this->arr;
}