#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of arr: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    //for maximum
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the maximum element in array is : "<<max<<endl;
//for minimun
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
        cout<<"the minimum element in array is : "<<min;


}