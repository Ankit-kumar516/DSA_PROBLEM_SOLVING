class Solution {
    public:
        void sortColors(vector<int>& nums) {
          multiset<int>s;
          for (auto num: nums)
          {
            s.insert(num);
          }
          nums.clear();
            nums.assign(s.begin(), s.end());
        }
    };