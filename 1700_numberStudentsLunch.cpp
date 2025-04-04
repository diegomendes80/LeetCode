#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    public:
        queue<int> st;
        stack<int> sw;
        int count=0;
        int countStudents(vector<int>& students, vector<int>& sandwiches) {

            for(int i=0; i < students.size(); i++){
                st.push(students[i]);
               
            }

            for(int i=sandwiches.size() -1 ; i >= 0; i--){
                sw.push(sandwiches[i]);
               
            }
          
            while(!sw.empty() && !st.empty() && count != st.size()){
                if(st.front() == sw.top()){
                    st.pop();
                    sw.pop();
                    count = 0;
                }

                else{
                    int student = st.front();
                    st.pop();
                    st.push(student);
                    count++;
                }
            }

            return st.size();

        }
    };