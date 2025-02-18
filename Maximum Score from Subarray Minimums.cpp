
class Solution {
    public:
      // Function to find pair with maximum sum
      int pairWithMaxSum(vector<int> &arr) {
          // Your code goes here
          int sum=arr[0]+arr[1];
          for(int i=2; i<arr.size(); i++)
          {
              sum=max(sum, arr[i-1]+arr[i]);
          }
          return sum;
      }
  };