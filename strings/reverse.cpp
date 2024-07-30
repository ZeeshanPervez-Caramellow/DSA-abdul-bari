#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "HellO WorlD";
    for(int i = 0; i < s.size()/2;i++){
        int t = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = t;
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    

    return 0;
}

