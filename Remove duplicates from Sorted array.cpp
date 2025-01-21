class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int j=0;
        arr[j]=arr[0];
       for(int i=1; i<arr.size(); i++)
       {
           if(arr[i-1]!=arr[i])
           {
               arr[++j]=arr[i];
           }
       }
        return j+1;
    }
};