class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int>v;
            map<int, int>ma;
            for(int i=0; i<nums.size(); i++)
            {
                int x=target - nums[i];
                if(ma.find(x)!=ma.end())
                {
                    v.push_back(ma[x]);
                    v.push_back(i);
                    return v;
                }
                ma[nums[i]]=i;
            }
            return v;
        }
    };