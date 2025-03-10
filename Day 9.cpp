// DAY 9

// Q1 : Two Sum 

// Approach is to itertate the array nd find the answer 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i , j;
        // vector<int> ans(2);
        for (i=0 ; i<nums.size() ; i++){
            for (j=0 ; j< nums.size() ; j++){
                if(nums[i] + nums[j] == target && i!=j){
                  return {i,j};
                }
            }
        }
        return {} ;
    }

};

// Time Complexity : O(n^2)
// Space Complexity : O(1)


// Q2 : Sort Colors 

// Approach is to iterate through the array and count number of instances of 0,1,2 and then clear the initial array and pushback the values in sorted order

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int c0=0 , c1=0 , c2=0 , x=nums.size() ;
        for(int i=0 ; i<x ; i++){
            if(nums[i]==2){
                c2++;
            }
            else if(nums[i]==0){
                c0++;
            }
            else{
                c1++;
            }
        }

        nums.clear() ;

        for(int i=0 ; i<c0 ; i++){
            nums.push_back(0);
        }

        for(int i=0 ; i<c1 ; i++){
            nums.push_back(1);
        }

        for(int i=0 ; i<c2 ; i++){
            nums.push_back(2);
        }

        
       
    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)

// Q3 : Maximum Subarray 

// Approach is to find the desired subarray while iterating using the max() functuon 

class Solution {
  public:
    
    int pairWithMaxSum(vector<int> &arr) {
        int ms=INT32_MIN;
        for(int i=0;i<arr.size()-1;i++){
            ms=max(ms,(arr[i]+arr[i+1]));
        }
        return ms;
    }
};

// Time Complexity : O(n) 
// Space Complexity : O(1) 
