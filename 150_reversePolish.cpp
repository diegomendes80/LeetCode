#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <string>

using namespace std;


class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> pilha;
            int count=0;

            do{
                string c = tokens[count];

                if(c == "+" || c == "-" || c == "*" || c == "/"){
                    int b = pilha.top();
                    pilha.pop();
                    int a = pilha.top();
                    pilha.pop();

                    if (c == "+") {
                        pilha.push(a + b);
                    }
                    else if (c == "-") {
                        pilha.push(a - b);
                    }
                    else if (c == "*") {
                        pilha.push(a * b);
                    }
                    else if (c == "/") {
                        pilha.push(a / b);
                    }
                }

                else{
                    pilha.push(stoi(c));
                }

                count++;
            }
            while(count < tokens.size());

            return pilha.top();
        }
    };


