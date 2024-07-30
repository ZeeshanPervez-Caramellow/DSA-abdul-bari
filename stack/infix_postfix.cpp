#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int priority(char a){
    if(a == '+' || a == '-'){
        return 1;
    }
    else if(a == '*' || a == '/'){
        return 2;
    }
    else return -1;
}
bool isOperand(char a){
    if(a == '-' || a == '+' || a == '*' || a == '/')return true;
    else false;
}

string convert(char * infix){
    
}

int main(){

    return 0;
}