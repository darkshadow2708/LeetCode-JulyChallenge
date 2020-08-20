class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        // Using 2 pointer approach
        for(int i=0;i<n;i++)
        {
         int j=i+1;   
         int k=n-1;
         while(j<k)
         {
             if(nums[i]+nums[j]+nums[k]==0)
             {
    
                 vector<int> temp(3);
                 temp[0]=nums[i];
                 temp[1]=nums[j];
                 temp[2]=nums[k];
                 ans.push_back(temp);
                 while(j<k&&nums[j]==nums[j+1]) // Condition so that duplicate can be avoided
                     j++;
                 while(j<k&&nums[k]==nums[k-1])
                     k--;
                 j++;
                 k--;
             }
             else if(nums[i]+nums[j]+nums[k]>0)
                 k--;
             else
                 j++;
             
         }
            while(i<n-1&&nums[i]==nums[i+1])
                i++;
        }
        return ans;
        
    }
};
