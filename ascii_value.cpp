#include<bits/stdc++.h>
using namespace std;
int main(){
    /*

    char ch;
    cin>>ch;
    cout<<"asci value is: "<<int(ch);*/
    string s;

    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ans=int(ch);
        cout<<ans<<" ";
    }
}