#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;


class Solution {
    public:
        string predictPartyVictory(string senate) {
            int len = senate.length();
            queue<int> r;
            queue<int> d;

            for(int i = 0 ; i<len ; i++){
                if(senate[i]=='R') r.push(i);
                else d.push(i);
            }
           
            
            while(!d.empty() && !r.empty()){
                if(d.front() < r.front()){
                    r.pop();
                    d.push(d.front() + len);
                    d.pop();
                }

                else if(d.front() > r.front()){
                    d.pop();
                    r.push(r.front() + len);
                    r.pop();
                }
            }

            if(r.empty()) return "Dire";
            else return "Radiant";
        }
    };