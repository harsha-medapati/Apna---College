class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int i,j,sum1=0,sum2=0;
        vector<int>nums,ans;
        map<int,int>mp;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                nums.push_back(grid[i][j]);
            }
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto &it:mp)
        {
            if(it.second > 1)
            {
                ans.push_back(it.first);
            }
            sum1 += it.first;
        }
        int n = nums[nums.size()-1];
        sum2 += n*(n+1)/2;
        if(sum1 == sum2)
        {
            int b = n+1;
            ans.push_back(b);
        }
        else
        {
            ans.push_back(abs(sum1-sum2));
        }
        return ans;
    }
};