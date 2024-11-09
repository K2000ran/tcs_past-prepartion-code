#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int vol=0;
    int con=0;
    int spa=0;
    for(int i=0;i<s.length();i++){
        char ch=tolower(s[i]);
        
            if(isspace(ch)){
                spa++;
            }
            else if(isalpha(ch)){
                if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vol++;
            }
            
            else{
                con++;
            }
         
            }
        
    }
    cout<<" VOwel: "<<vol<<endl;
    cout<<" constant : "<<con<<endl;
    cout<<" space: "<<spa<<endl;
}