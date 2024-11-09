#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"the enter the size of array : ";
    cin>>size;
    vector<int>v;
    unordered_map<int,int>s;
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
   /* for(auto a:v){
        if(s[a]){
            s[a]+=1;

        }
        else{
            s[a]=1;
        }
    } */ 
    for(auto a:v){
        ++s[a];
    }
    for(auto a:s){
        if(a.second>1){
            cout<<a.first<<" ";
        }
    }
}