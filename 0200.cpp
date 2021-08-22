//想法:遍歷過每個格子，如果是1就dfs去查附近是不是1(陸地)，查完之後把這塊陸地"壓"到水中
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()){                                          //先判斷是否為空，避免出現RE
            return 0;
        }
        int m=grid.size();                                         //m代表直排
        int n=grid[0].size();                                      //n代表橫排
        int ans=0;                                                 //ans代表島的數量                
        for (int y=0;y<m;y++){                                     //先跑y  
            for (int x=0;x<n;x++){                                 //再跑x      
                ans+=grid[y][x]-'0';                                       
                dfs(grid,x,y,m,n);                                       
            }                                       
        }                                       
        return ans;                                       
    }                                                                              
private:                                                                              
    void dfs(vector<vector<char>> & grid,int x,int y,int m,int n){                               
        if (x<0 or y<0 or x>=n or y>=m or grid[y][x]=='0')         //判斷:當目前的格子超過邊界或當前格子是水->直接返回 
            return;                                                                              
        else{
            grid[y][x]='0';                                        //如果以上條件都符合->把這塊地"壓"下去  
            dfs(grid,x+1,y,m,n);                                      
            dfs(grid,x-1,y,m,n);                                       
            dfs(grid,x,y+1,m,n);                                       
            dfs(grid,x,y-1,m,n);                                       
        }
    }
};
