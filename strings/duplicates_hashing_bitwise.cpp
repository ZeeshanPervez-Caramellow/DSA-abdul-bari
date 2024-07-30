#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "geeksforgeeks";
    int H = 0,D = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int x = 1;
        x = x << (s[i]-97);
        if ((x & H) > 0)
        {
            if((x & D) == 0){  //why does this work?
                cout << s[i] <<endl;
                D = x | D;
            }
        }
        else{
            H = x | H;
        }
        
    }
         
    return 0;
}