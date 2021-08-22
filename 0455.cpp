class Solution {
public:
    int findContentChildren(vector<int>& child, vector<int>& cookie) {
        sort(child.begin(),child.end());                              
        sort(cookie.begin(),cookie.end());                              
        int ans=0;                                                 
        int j=0;                                                   //指針j表示目前是第j個餅乾
        for (int i=0;i<child.size();i++){                          //枚舉每個小孩
            while(j<cookie.size() and cookie[j]<child[i]){         //餅乾的大小需要大於小孩的需求,如果不能滿足,就移動j(第10行)掃到第一個能被滿足的小孩為止
                j++;                                                            
            }
            if (j<cookie.size()){                                                            
                ans++;                                             //如果j沒越界就代表找到目標了
                j++;                              
            }                              
        }                              
        return ans;                                                            
    }
};
