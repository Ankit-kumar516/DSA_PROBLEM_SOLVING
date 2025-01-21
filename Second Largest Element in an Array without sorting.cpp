// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int maxf=INT_MIN;
        int maxs=INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]>maxf)
            {
                maxs=maxf;
                maxf=arr[i];
            }
            else
            {
                if(arr[i]>maxs)
                {
                    if(arr[i]!=maxf)
                    {
                        maxs=arr[i];
                    }
                }
            }
        }
        if(maxs==INT_MIN)
          return -1;
          
        return maxs;
    }
};