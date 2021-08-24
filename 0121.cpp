class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int lowest=prices[0];
        for (int i:prices){
            if (i>lowest){
                if (ans<i-lowest){
                ans=i-lowest;
                }
            }    
            else{
                lowest=i;
            }
        }
        return ans;
    }
};
