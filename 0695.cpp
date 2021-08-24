class Solution {
public:
    int maxArea= 0;
    int islandArea= 0;
    void dfs(vector<vector<int>>&grid,int x,int y,int n,int m) {
        if (x<0 or y<0 or  x>=n or y>=m or grid[x][y]== 0){  
            return;
        }
        grid[x][y]=0;
        islandArea++;
        maxArea=max(maxArea,islandArea);
        dfs(grid,x-1,y,n,m); // 上
        dfs(grid,x+1,y,n,m); // 下
        dfs(grid,x,y-1,n,m); // 左
        dfs(grid,x,y+1,n,m); // 右
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.empty()){
            return 0;
        }
        int n=grid.size();
        int m=grid[0].size();
        for(int x=0;x<n;x++){
            for(int y=0;y<m;y++){
                if(grid[x][y]==1){
                    islandArea=0;
                    dfs(grid,x,y,n,m);
                }
            }
        }
        return maxArea;
    }
};
