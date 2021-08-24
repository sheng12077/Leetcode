class Solution {
public:
    int maxProfit(vector<int>& prices){
        int result=0;
        int lowest=prices[0];
        for(int i:prices){
            if(i>lowest){
                if(result<i-lowest){
                    result=i-lowest;
                }
            }
            else{
                lowest=i;
            }
        }
        return result;
    }
};
