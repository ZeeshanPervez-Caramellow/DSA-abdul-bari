#include<iostream>
using namespace std;

void Duplicates(int * arr,int size){
    for (int i = 0; i < size;i++){
        if (arr[i] == arr[i + 1]){
            int j = i + 1;
            while (arr[j] == arr[i])j++;
            printf(" %d - %d times\n",arr[i],j - i);
            i = j - 1;
        }
    }
    
}

void Duplicates2(int * arr,int size){
    int LasDup = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != LasDup)
        {
            printf("%d\n",arr[i]);
            LasDup = arr[i];
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[11] = {2,3,5,9,9,9,11,13,17,17,19};
    Duplicates(arr,11);
    Duplicates2(arr,11);
    return 0;
}
