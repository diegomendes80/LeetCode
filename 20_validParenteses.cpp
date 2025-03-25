#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){ 
    string s;

    cin >> s;

    stack<char> aberturas;
    stack<char> fechamentos_auxiliar;
    stack<char> fechamentos;

    for(char c : s){
        if(c == '(' || c == '[' || c == '{'){
            aberturas.push(c);

        } else if(c == ')' || c == ']' || c == '}'){
            fechamentos_auxiliar.push(c);
        }

    }

    int count = fechamentos_auxiliar.size();

    for(int i=0; i < count; i++ ){
        fechamentos.push(fechamentos_auxiliar.top());
        fechamentos_auxiliar.pop();
    }

    if((aberturas.size() != fechamentos.size())){
        cout << "False 1" << endl;
        return false;
    }

    for(int i=0; i < aberturas.size(); i++){
        
        switch (aberturas.top())
        {
        case '(':
            if(fechamentos.top() != ')'){
                cout << "False 2" << endl;
                return false;
            }
            break;
        
        case '{':
            if(fechamentos.top() != '}'){
                cout << "False 2" << endl;
                return false;
            }    
            break;

        case '[':
            if(fechamentos.top() != ']'){
                cout << "False 2" << endl;
                return false;
            }    
            break;    
        default:
            break;
        }

        aberturas.pop();
        fechamentos.pop();
    }


    cout << "True" << endl;
    return true;

}