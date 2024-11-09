#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int count=1;
    int n;
    cout<<"enter the size of arr: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int max=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>max){
            count++;
            max=v[i];
        }
    }
    cout<<"answer: "<<count;

}