#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double med;
    cout<<"enter the size of arr: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }//if size is even the medium = middle+ middle +1
    //if size is odd the medium is middle number 
    sort(v.begin(),v.end());
    if(n%2==0){
        int  mediun_first=(n/2)-1;
        int mediun_second=(n/2);
        med=(v[mediun_first]+v[mediun_second])/2.0;
    }
    else{
        med=v[n/2];
    }
    cout<<"the medium: "<<med;
}