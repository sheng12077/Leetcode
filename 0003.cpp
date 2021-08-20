class Solution {
public:
    signed lengthOfLongestSubstring(string s) {
        
        ios::sync_with_stdio(0);              //優化
        cin.tie(0);
        cout.tie(0);
        
        int ans=0;
        vector<int> hashtable(128,-1);        //-1:初始化的小技巧(note),hashtable紀錄上次該字元出現的位置
        for (int i=0 , j=0 ;j<s.length();j++){//i是左指針，j是右指針  j每次移動一格
            i=max(i,hashtable[s[j]]+1);       //更新左指針i:(左指針所指字元--i)和(當前字元--hashtable[s[j]])之上一次出現的位置+1,沒出現過的c++預設為false(應該吧？),並且加入hashtable(第14行)
            ans=max(ans,j-i+1);               //ans代表最長的子字串,j-i+1代表長度,(之前最長跟現在的這個做比較)
            hashtable[s[j]]=j;                
        }
        return ans;
    }
};
