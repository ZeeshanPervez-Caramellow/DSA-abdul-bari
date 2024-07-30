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
void missingEle(int * arr,int size,int l){
    int H[l] = {0};
    for (int i = 0; i < size; i++)
    {
        H[arr[i]] = 1;
    }
    for (int i = 1; i < l+1; i++)
    {
        if (H[i] == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {3,7,4,9,12,6,1,11,2,10};
    missingEle(arr,10,12);
    return 0;
}
