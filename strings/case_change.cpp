#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "HellO WorlD";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
    
    
    return 0;
}
