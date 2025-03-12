// DAY 11 

// POTD 

// Approach is to use binary search through upper and lower bound functions using the value 0 i.e neither positive nor negetive 

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        vector<int>::iterator upper ;
         vector<int>::iterator lower ;

         upper = upper_bound(nums.begin() , nums.end() , 0);
         lower = lower_bound(nums.begin() , nums.end() , 0);

         if (lower - nums.begin() > nums.end() - upper) return lower - nums.begin() ;
         else return nums.end()-upper ;
    }  
};

// Time Complexity : O(logn)
// Space Complexity : O(1) 
