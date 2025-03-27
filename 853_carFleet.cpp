#include <iostream>
#include <vector>
#include <stack>
#include <algorithm> 

using namespace std;

class Solution {
    public:
        int carFleet(int target, vector<int>& position, vector<int>& speed) {
            vector<pair<int, int>> cars;
            for (int i = 0; i < position.size(); i++) {
                cars.push_back({position[i], speed[i]});
            }

            sort(cars.begin(), cars.end(), greater<pair<int, int>>()); //ordena em ordem decrescente

            stack<double> times;
            //int fleets = 1;

            for(int i=0; i < cars.size(); i++){

                double time = (double)(target - cars[i].first) / cars[i].second;

                if(!times.empty() && time <= times.top()){
                    continue;
                    
                }

                times.push(time);


                
            }

            return times.size();
        }
    };


    int main(){

        vector<int> position_teste;
        position_teste.push_back(0);
        position_teste.push_back(2);
        position_teste.push_back(4);

        vector<int> speed_teste;
        speed_teste.push_back(4);
        speed_teste.push_back(2);
        speed_teste.push_back(1);

        Solution solution;

        int r = solution.carFleet(12, position_teste, speed_teste);

        cout << r;
    
    }