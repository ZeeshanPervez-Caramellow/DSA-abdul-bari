#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "[{[()()][]}][";
    string check1 = "[{(";
    string check2 = "]})";
    stack<char> st;
    for(int i = 0;i < str.size();i++){
        if(check1.find(str[i]) != string::npos)st.push(str[i]);
        else if(check2.find(str[i]) != string::npos)st.pop();
        else break;
    }
    if(st.empty())cout << "matched";
    else cout << "unmatched";
    return 0;
}