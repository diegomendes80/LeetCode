#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//dado o indice i, devo achar o menor indice j, j>i, tal que temperatura[j] > temperatura[i]


class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& temperatures) {
        
            int n = temperatures.size();
            vector<int> response(n, 0);
            stack<int> st;

            for(int i=0; i < temperatures.size() ; i++){
                
                while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                    int index = st.top();
                    st.pop();
                    response[index] = i - index;
                }

                st.push(i);
            }

            return response;
            
    }

};


    int main(){

   
    
   
    

    

    }