#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;


class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> freq;
            queue<int> q; 

            
            for (char c : s) {
                freq[c]++;
            }

            for(int i=0; i < s.length(); i++){
                if(freq[s[i]] == 1) return i; 
            }

            return -1;
        }
    };