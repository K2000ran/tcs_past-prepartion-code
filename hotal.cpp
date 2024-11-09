#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the  hour: ";
    cin>>n;
    int entry[n];
    int leave[n];
    for(int i=0;i<n;i++){
        cin>>entry[i];
    }
    for(int i=0;i<n;i++){
        cin>>leave[i];
    }
    int record[n];
    int curr_guest=0;
    for(int i=0;i<n;i++){
        curr_guest=curr_guest+(entry[i]-leave[i]);
        record[i]=curr_guest;
    }
    //record of guest
    for(int i=0;i<n;i++){
        cout<<record[i]<<" ";
    }
    cout<<endl;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(record[i]>max){
            max=record[i];
           }
              
    }
    cout<<max;
}