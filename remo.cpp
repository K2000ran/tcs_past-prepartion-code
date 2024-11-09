#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string st;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char ch=tolower(s[i]);
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
                continue;
            }
            else{
                st+=ch;
            }
    }
    for(int i=0;i<st.length();i++){
        cout<<st[i];
    }
}