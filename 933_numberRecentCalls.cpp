#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//dado o indice i, devo achar o menor indice j, j>i, tal que temperatura[j] > temperatura[i]


class RecentCounter {
    public:
    int result;
    queue<int> requests;

    RecentCounter() {
        result = 0;
    }
    
    int ping(int t) {

        requests.push(t);

        if(!requests.empty()){
       
            
            while (!requests.empty() && requests.front() < t - 3000) {
                requests.pop();
            }

        }

       return requests.size();
    }


};