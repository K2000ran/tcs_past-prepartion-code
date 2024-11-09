#include <bits/stdc++.h>
using namespace std;
int fact(int div){
    int sum=1;
    for(int i=1;i<=div;i++){
        sum=sum*i;
    }
    return sum;
}

bool isstrong(int num){
    int div;
    int sum=0;
    int sq;
    int temp=num;
    while(num!=0){
        div=num%10;
        sq=fact(div);
        sum=sum+sq;
        num=num/10;
    }
    if(temp==sum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int size;
    cout<<"enter the size of vector:";
    cin>>size;
    vector<int>v;
    int arr[size];
    for(int i=0;i<size;i++){
        
        int n;
        cin>>n;
        arr[i]=n;
    }
    for(int i=0;i<size;i++){
        if(isstrong(arr[i])){
            v.push_back(arr[i]);
        }
    }
    for(auto a:v){
        cout<<a<<" ";
    }
    
}
