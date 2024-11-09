#include<iostream>
using namespace std;
int main(){
    int size;
    int count =1;
    cout<<"enter the size of arraty: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            count++;
            max=arr[i];
        }
    }
    cout<<count;
}