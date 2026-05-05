class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int c;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
          c=target-nums[i];
            if(mp.find(c)!=mp.end())
            {
            v.push_back(i);
            v.push_back(mp[c]);   
                
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};