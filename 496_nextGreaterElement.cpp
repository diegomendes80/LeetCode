#include <iostream>
#include <vector>
#include <stack>

using namespace std;

//dado o indice i, devo achar o menor indice j, j>i, tal que temperatura[j] > temperatura[i]


class Solution {
    public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> st;
        vector<int> response(nums1.size(), -1);
        vector<int> maiores2;
        
       for(int i=0; i < nums1.size(); i++){
            for(int j=0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    int count = j+1;
                    while(count < nums2.size()){
                        if(nums2[count] > nums1[i] ){
                            response[i] = nums2[count];
                            break;
                        }
                        count++;
                    }
                }
            }
       }

       return response;

    }



};


    int main(){

   
    
   
    

    

    }