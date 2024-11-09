#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    
    sort(v.begin(),v.end());//sort full vectttttor
    for(int i =0;i<n/2;i++){//cout half asc vector
        cout<<v[i]<<" ";
    }
    for(int i=n-1;i>=n/2;i--){//cout half dec vector
        cout<<v[i]<<" ";
    }



}