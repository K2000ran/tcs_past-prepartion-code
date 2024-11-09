#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" enter the size of arr: ";
    cin>>n;
    vector<int>v;
    set<int>s;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(auto a:v){
        s.insert(a);
    }
    for(auto a: s){
        cout<<a<<" ";
    }
    
}