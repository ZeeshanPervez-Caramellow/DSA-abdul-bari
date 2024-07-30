#include <iostream>
using namespace std;
int main(){
    string s = "geeksforgeeks";
    int H[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        H[s[i]-97]++;  
    }
    for (int i = 0; i < 26; i++)
    {
        if(H[i]>1){
            cout << char(i+97) << " " << H[i] << endl;
        }
    }
    
    return 0;
}
