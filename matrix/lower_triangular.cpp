#include <iostream>
using namespace std;

class lowerTri{
    private:
        int * arr;
        int n;
    public:
        lowerTri(int n){
            this->n = n;
            this -> arr = new int[n*(n + 1)/2];
        }
        void display(){
            for(int i = 1;i <= n;i++){
                for(int j = 1;j <= n;j++){
                    if(i >= j) cout << arr[i*(i - 1)/2 + j - 1] << " ";
                    else cout << 0 << " "; 
                }
                cout << endl;
            }
        }
        void set(int i,int j,int x){
            if(i >= j)arr[i*(i - 1)/2 + j - 1] = x;  // for column major n(j - 1) + (j - 1)*(j - 2)/2 + (i - j)
        }
        int get(int i,int j){
            if(i >= j)return arr[i*(i - 1)/2 + j - 1];
            return 0;
        }
        ~lowerTri(){
            delete[] arr;
        }
};

int main(){
    lowerTri lt(3); // create a 3x3 lower triangular matrix

    lt.set(1, 1, 1); // set the element at (1, 1) to 1
    lt.set(2, 1, 2); // set the element at (2, 1) to 2
    lt.set(2, 2, 3); // set the element at (2, 2) to 3
    lt.set(3, 1, 4); // set the element at (3, 1) to 4
    lt.set(3, 2, 5); // set the element at (3, 2) to 5  
    lt.set(3, 3, 6); // set the element at (3, 3) to 6

    lt.display(); // display the matrix
           
    return 0;
}