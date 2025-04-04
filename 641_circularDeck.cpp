#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

class MyCircularDeque {
    public:

    queue<int> deque;
    int max_size_deck; 
        MyCircularDeque(int k) {
            max_size_deck = k ;
        }
        
        bool insertFront(int value) {
            if (this->isFull())
            {
                return false;
            }
            else{
                queue<int> aux_deque;
                aux_deque.push(value);

                while(deque.size() > 0){
                    aux_deque.push(deque.front());
                    deque.pop();
                }

                deque = aux_deque;

                return true;


            }
            
        }
        
        bool insertLast(int value) {
            if (this->isFull())
            {
                return false;
            }
            else{
                deque.push(value);
                return true;
            }
        }
        
        bool deleteFront() {
            if (this->isEmpty())
            {
                return false;
            }
            else{
               deque.pop();
               return true;

            }
            
        }
        
        bool deleteLast() {
            if (this->isEmpty())
            {
                return false;
            }
            else{
                queue<int> aux_deque;

                while(deque.size() > 1){
                    aux_deque.push(deque.front());
                    deque.pop();
                }

                deque.pop();

                deque = aux_deque;

                return true;


            }
        }
        
        int getFront() {
            if(!this->isEmpty()) return deque.front();
            else return -1;
        }
        
        int getRear() {
            if(!this->isEmpty()) return deque.back();
            else return -1;
        }
        
        bool isEmpty() {
            return deque.size() == 0;
            
        }
        
        bool isFull() {
            return deque.size() == max_size_deck;
        }
    };
    
    /**
     * Your MyCircularDeque object will be instantiated and called as such:
     * MyCircularDeque* obj = new MyCircularDeque(k);
     * bool param_1 = obj->insertFront(value);
     * bool param_2 = obj->insertLast(value);
     * bool param_3 = obj->deleteFront();
     * bool param_4 = obj->deleteLast();
     * int param_5 = obj->getFront();
     * int param_6 = obj->getRear();
     * bool param_7 = obj->isEmpty();
     * bool param_8 = obj->isFull();
     */