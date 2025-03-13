// DAY 12

// Q1 : Binary Search

// Approach : implementing Binary Search 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0 , h=nums.size()-1 , mid ;
        while (l<=h){
            mid = l + (h-l)/2 ;
            if(nums[mid]==target){
                return mid ;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else {
                l=mid+1 ;
            }
        }
        return -1 ;
    }
};

// Time Complexity : O(logn)
// Space Complexity : O(1)

// Q2 : 
