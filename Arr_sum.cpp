#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arr: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    double sum=0;
    for(auto a:v){
        sum+=double(a);
       
    }
    cout<<"the sum of arr: "<<sum<<endl;

    double avg=sum/n;
    cout<<"the average of arr: "<<avg;
}