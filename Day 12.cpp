ch // DAY 12

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

// Q2 : Find first and last position of element in sorted array

// Approach : 



// Q3 : Search Insert Position 

// Approach : using binary search and using lower bound to find the position if it exited 

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       
       int c = binarySearch(nums , 0 , nums.size()-1 , target) ;

       if(c>=0){
        return c;
       }
       else if(c==-1){
        vector<int>::iterator ans;
        ans=lower_bound(nums.begin() , nums.end() , target) ;
        c=ans - nums.begin()  ;
        }
        
        return c;
       
    }

private :
int binarySearch(vector <int>& arr, int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

};

// Time Complexity : O(logn)
// Space Complexity : O(1) 


