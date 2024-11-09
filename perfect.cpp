#include<iostream>
using namespace std;
int main(){
    int n;
    int div=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            div=div+i;
        }
    }
    if(div==n){ 
        cout<<" perfect number";

    }
    else{
        cout<<"Not perfect number: ";
    }
}