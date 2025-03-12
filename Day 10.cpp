// DAY 10

// Q!: Rearrange the Araay based on Sign 

// Approach : 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size() , 0);

        int k=0,j=1 ;

        for(auto i : nums){
            if(i<0){
                ans[j]=i;
                j+=2;
            }
            else{
                ans[k]=i;
                k+=2;
            }
        }
       
        return ans;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n) 

// Q2: Next Permutation 

// Approach : 

