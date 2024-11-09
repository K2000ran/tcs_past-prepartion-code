#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    string s;
    stack<string>st;
    getline(cin,s);
    reverse(s.begin(),s.end());
    stringstream ss(s);
    string word;
    while(ss>>word){
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();

        if(!st.empty()){
            cout<<" ";
        }

    }
    cout<<endl;
}