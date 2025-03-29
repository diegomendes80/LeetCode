#include <iostream>
#include <queue>

using namespace std;



class Stack {

    public:
    int tamanho;
    queue<int> queue1, queue2;

    Stack(){
        tamanho = 0;

    }

    bool empty(){
        return tamanho == 0;
    }

    void push(int x){
        queue1.push(x);
        tamanho++;
    }

    int pop(){

        
        while(queue1.size() > 1){
            queue2.push(queue1.front());
            queue1.pop(); //remove o primeiro da fila até sobrar só o último

        }

        int last = queue1.front();
        queue1.pop(); //tira o ultimo elemento, que no entendimento da pilha é o que está no topo
        queue1 = queue2;

        return last;

    }

    int top() {
        return queue1.front();
    }


};