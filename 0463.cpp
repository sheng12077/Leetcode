class Solution {
    constexpr static int increase_x[4]={0,1,0,-1};                       //dfs小技巧                           
    constexpr static int increase_y[4]={1,0,-1,0};                                        
public:                                                                                
    int islandPerimeter(vector<vector<int>>& grid) {                                        
        int n=grid.size();                                               //小先設定好,不然打很長一串很麻煩            
        int m=grid[0].size();                                            //這裡用grid[0]是因為可能是"一維"的
        int ans=0;                                                       //總共的邊數                         
        for (int i=0;i<n;i++){                                                                                
            for (int j=0;j<m;j++){                                                                                
                if (grid[i][j]==1){                                      //如果是1(陸地),也可寫 if(grid[x][y]); 
                    int edge_num=0;                                      //這個格子接觸的邊數          
                    for (int k=0;k<4;k++){                               //dfs
                        int x=i+increase_x[k];                                                                      
                        int y=j+increase_y[k];                                        
                        if(x<0 or y<0 or x>=n or y>=m or grid[x][y]==0){ //如果出界或是這個格子是0(海),這邊用i跟j去判斷是因為座標不能出現-1,所以把座標的數值拿出來運算 
                            edge_num++;                                       
                        }
                    }
                    ans+=edge_num;                                                                                
                }
            }
        }
        return ans;                                        
    }
};
