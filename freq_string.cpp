#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; 
     // Input string
     sort(s.begin(),s.end());
    
    unordered_map<char, int> freq;  // Map to store frequency of characters

    // Loop through the string and count frequencies
    for(char ch : s) {
        freq[ch]++;  // Increment the count of character 'ch'
    }

    // Output the frequency of each character
    for(auto it : freq) {
        cout << it.first << it.second << " ";
    }

    cout << endl;

    return 0;
}
