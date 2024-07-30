#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "nitin";
    for(int i = 0;i < s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            cout<<"not a palindrome";
            break;
        }
    }
    cout<<"palindrome" << endl;

    string s1 = "painter";
    string s2 = "painting";
    int isSame = 0;
    for (int i = 0,j = 0; s1[i] != '\0' && s2[j] != '\0'; i++,j++)
    {
        if (s1[i] != s2[j])
        {
            isSame = 1;
            break;
        }
        
    }
    cout << isSame;
    return 0;
}
