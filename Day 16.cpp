// DAY 16

// Q1 : 

// Approach : 



// Time Complexity : 
// Space Complexity :

// Q2 : First unique letter in a string 

// Approach : creating a int vector of 26 size and counting occurence of each letter in string s , then returning the first index with count 0 

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26,0);
        vector<int> arrr;
        
         for(char i : s){
            int j= i - 'a' ;
            arr[j]++;
         }
         for(int i=0 ; i<s.length() ; i++){
            int k= s[i] - 'a' ;
            if(arr[k]==1){
                return i ;
            }
         }
         return -1;
    }
};

// Time Complexity : O(n) 
// Space Complexity : O(1) 
