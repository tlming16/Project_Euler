/* 
 * author:tlming16
 * email:tlming16@fudan.edu.cn
 * all wrong reserved
*/
class Solution {
public:
    int numIslands(vector<vector<char>>& mg) {
        int n = mg.size();
        if(n==0) return 0;
        int m = mg[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( mg[i][j]=='1') {
                    ans++;
                    dp(mg,i,j);   
                }
            }
        }

        return ans;
    }


    void dp(vector<vector<char>> & grid,int x,int y){
        int n = grid.size();
        int m = grid[0].size();
        grid[x][y]='0';
        if(x+1<n&& grid[x+1][y]=='1')
            dp(grid,x+1,y);
        if (y+1<m && grid[x][y+1]=='1')
            dp(grid,x,y+1);
        if (x-1>=0 && grid[x-1][y]=='1')
            dp(grid,x-1,y);
         if (y>=1 && grid[x][y-1]=='1')
            dp(grid,x,y-1);
           
    }
};