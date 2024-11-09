#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string st;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='('||ch==')'||ch=='{'||ch=='}'||ch=='['||ch==']'){
            continue;
        }
        else{
            st+=ch;
        }
    }
    cout<<st;
}