#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string st;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(isalpha(ch)){
            st+=ch;
        }

    }
    cout<<st;
    return 0;
}