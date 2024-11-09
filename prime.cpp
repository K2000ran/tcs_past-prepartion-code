#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count;
    count=0;
     if(n==1 || n==2){
        cout<<"prime";
    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
   
    if(count>=2){
        cout<<"Not Prime :"<<n;
    }
    else{
        cout<<"prime"<<n;
    }
}