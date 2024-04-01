class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1)
        {
            return nums[0];
        }
        else
        {   
            int thirdmaxi;
            int count=0;
            for(int i=n-1; i>=1; i--)
            {
                if(nums[i]>nums[i-1])
                {
                    count++;
                if(count==2)
                {
                    thirdmaxi=nums[i-1];
                    return thirdmaxi;
                }
                }
            }
            
        } 
        return nums[n-1];
    }
};