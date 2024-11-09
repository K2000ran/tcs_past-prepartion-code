#include<bits/stdc++.h>
using namespace std;

void findSymmetricPairs(vector<pair<int, int>> &pairs) {
    // Map to store first element of pair as key and second element as value
    unordered_map<int, int> pair_map;

    cout << "Symmetric pairs are: " << endl;
    
    for (auto &p : pairs) {
        int first = p.first;
        int second = p.second;

        // Check if reverse pair (second, first) exists in the map
        if (pair_map.find(second) != pair_map.end() && pair_map[second] == first) {
            cout << "(" << first << ", " << second << ") and (" << second << ", " << first << ")" << endl;
        }
        
        // Insert the current pair into the map
        pair_map[first] = second;
    }
}

int main() {
    // Input array of pairs
    vector<pair<int, int>> pairs = {{1, 2}, {3, 4}, {5, 9}, {2, 1}, {9, 5}, {7, 8}};
    
    findSymmetricPairs(pairs);
    
    return 0;
}
