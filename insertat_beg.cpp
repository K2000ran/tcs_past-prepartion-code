#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<3;i++){
        int pos,value;
        cin>>pos>>value;
        v.insert(v.begin()+1+pos,value);
    }
    for(auto c:v){
        cout<<c<<" ";
    }
}