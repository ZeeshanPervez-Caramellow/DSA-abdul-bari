#include<iostream>
using namespace std;

int Max(int size,int * arr){
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    return max;
    
}

void Duplicates(int * arr,int size){
    int H[20] = {0};
    for (int i = 0; i < size; i++)
    {
        H[arr[i]]++;
    }
    for (int i = 0; i < 20; i++)
    {
        if(H[i] > 1){
            printf("%d - %d times\n",i,H[i]);
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[10] = {1,3,4,6,7,7,11,13,13,13};
    int arr2[10] = {1,3,4,2,7,7,4,13,12,2};
    Duplicates(arr,10);
    printf("----------\n");
    Duplicates(arr2,10);
    return 0;
}
