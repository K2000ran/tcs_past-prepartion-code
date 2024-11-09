#include<bits/stdc++.h>
using namespace std;
int main(){
    int year,month;
    cout<<"enter the year and month: ";
    cin>>year>> month;
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};//storing the  dayds of 12 month in year
    if(month==2 && ((year%400==0 )|| (year%4==0 && year %100!=0))){//checking the year year
        cout<<"days in month of year : "<<year<<"   is: "<<arr[month-1]+1;
    }
    else{
         cout<<"days in month of year : "<<year<<"   is: " <<arr[month-1];
    }
}