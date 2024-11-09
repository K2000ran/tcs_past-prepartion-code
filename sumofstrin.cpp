/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);  
    
    int sum = 0;
    string temp ;

    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            temp += s[i];  
        } else {
           
            if(!temp.empty()){
                sum += stoi(temp);  
                temp = "";  
            }
        }
    }

    if(!temp.empty()){
        sum += stoi(temp);
    }

    cout << sum << endl;  
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string st;
    vector<int>v;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(!isalpha(s[i])){
            st+=s[i];
        }
        else{
            if(!st.empty()){
                v.push(stoi(s[st]));
                st=" ";
            }
        }

    }
    if (!st.empty()) {
        v.push_back(stoi(st));
    }
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum;
}*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string st = ""; // To hold current number as string
    vector<int> v;  // Vector to store parsed numbers
    getline(cin, s); // Read the entire input string

    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) { // Check if the character is a digit
            st += s[i];      // Add it to the current number string
        } else {
            if (!st.empty()) {  // If we have accumulated a number string
                v.push_back(stoi(st));  // Convert it to an int and push it to the vector
                st = "";  // Reset the current number string
            }
        }
    }
    // Push the last number if any
    if (!st.empty()) {
        v.push_back(stoi(st));
    }

    // Sum the integers
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }

    // Output the sum
    cout << sum << endl;
    return 0;
}


