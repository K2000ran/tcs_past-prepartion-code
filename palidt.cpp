#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string temp=s;
    reverse(temp.begin(),temp.end());
    if(temp==s){
        cout<<"palidrome: "<<endl;
    }
    else{
        cout<<"not palidrone: ";
    }
    
}