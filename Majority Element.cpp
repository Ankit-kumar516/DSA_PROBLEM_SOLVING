class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            map<int, int> ma;
            for(auto num: nums)
            {
                ma[num]++;
                if(ma[num]>nums.size()/2)
                {
                    return num;
                }
            }
            return -1;
        }
    };