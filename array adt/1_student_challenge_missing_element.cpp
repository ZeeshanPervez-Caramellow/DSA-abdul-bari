#include<iostream>
using namespace std;

int MissingEle(int * arr,int size){
    int sum = 0;
    int i = 0;
    for (; i < size; i++){
        sum+=arr[i];
    }
    int n = (arr[size-1]*(arr[size-1] + 1))/2;
    return n - sum;
}

void MissingEle2(int * arr,int size){
    int i = 0;
    int l = arr[0];
    for (; i < size; i++)
    {
        if (arr[i] - i != l)
        {
            printf("missing ele = %d\n",i + l);
            l = arr[i] - i;
        }
        
    }
    
}

int main(){
    int arr[11] = {1,2,3,4,5,6,8,9,10,11,12};
    int arr2[11] = {6,7,8,9,10,11,13,14,15,17};
    int x = MissingEle(arr,11);
    MissingEle2(arr2,10);
    printf("\n%d",x);
    return 0;
}