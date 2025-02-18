class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if(nums.size()==0)
              return 0;
            set<int>s;
            for(auto num: nums)
            {
                s.insert(num);
            }
            int count=1, y=INT_MIN, mx_count=1;
            for(auto x: s)
            {
                if(x==y+1)
                {
                    count++;
                    mx_count=max(mx_count, count);
                    y=x;
                }
                else
                {
                    count=1;
                    y=x;
                }
            }
            return mx_count;
        }
    };