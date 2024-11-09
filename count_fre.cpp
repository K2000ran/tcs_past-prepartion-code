/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>anshu;
    vector<int>v;
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    for(auto a:v){
        if(anshu[a]){
            anshu[a]+=1;
        }else{
            anshu[a]=1;
        }
    }
    for(auto a:anshu){
        cout<<a.first<<" "<<a.second<<endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
    for(auto a:v){
        if(m[a]){
            m[a]+=1;

        }
        else{
            m[a]=1;
        }
    }
    for(auto a:m){
        cout<<a.first<<" "<<a.second<<endl;
    }
    return 0;

}