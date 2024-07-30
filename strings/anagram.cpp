#include <iostream>
using namespace std;
int main(){
    string s1 = "observe";
    string s2 = "verbose";
    int H[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        H[s1[i] - 97]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        H[s2[i] - 97]--;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if (H[i] != 0)
        {
            cout << "not an anagram";
            break;
        }
        
    }
    cout << "anagram";
               
    return 0;
}