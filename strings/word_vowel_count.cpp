#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int word = 1;
    string s = "HellO WorlD my nigga";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            cout << s[i] << " is a vowel" << endl;   
        }
        else if (((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))&&(!(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')))
        {
            cout << s[i] << " is a consonant" << endl;
        }
        else if (s[i] == ' ')
        {
            cout << "neither" << endl;
            word++;
        }
        
        
    }
    cout << "the number of words " << word << endl;
    return 0;
}
