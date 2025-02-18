class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int>pos;
            vector<int>neg;
            for (auto num: nums)
            {
                if(num>0)
                {
                    pos.push_back(num);
                }
                else
                {
                    neg.push_back(num);
                }
            }
            int i=0, j=0, k=0;
            vector<int>v;
            while(i<nums.size())
            {
                if(i%2==0)
                {
                    v.push_back(pos[j++]);
                }
                else
                {
                    v.push_back(neg[k++]);
                }
                i++;
            }
            return v;
        }
    };