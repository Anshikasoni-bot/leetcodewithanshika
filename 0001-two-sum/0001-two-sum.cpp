class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int key) 
    {
      int n=arr.size(),i,j;
     for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
               return{i,j};
            }
        }
      }

      return {};
    }
};








