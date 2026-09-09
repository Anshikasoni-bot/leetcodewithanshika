class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));
        k%=(m*n);
          int i=0,j=0;
          int total=m*n;
       for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      
        int oldindex=(i*n)+j;
         int newindex=(oldindex+k)%total;
         int c=newindex%n;
         int r=newindex/n;
         ans[r][c]=grid[i][j];
        
       }
       }
       return ans; 
    }
};