#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "geeksforgeeks";
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != '*') // to avoid printing the same character again
        {
            int count = 0;
            for (int j = i + 1; j < s.size() ; j++)
            {
                if(s[i] == s[j])
                {
                    count++;
                    s[j] = '*'; // to avoid printing the same character again
                }
            }
            cout << s[i] << " " << count << endl;
        }
    }
    
    return 0;
}
