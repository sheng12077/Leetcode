class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {                          
        vector<int>dp(amount+1,amount+1);              //大小宣告成amount+1,保證不會超過,接著dp中的每一個都先預設為amount+1,這樣在比大小的時候保證這個會比較大       
        dp[0]=0;                                       //先設為0,不然不能比,輸出會恆為0                 
        for (int coin:coins){                          //(note)特別的語法,coin為一個迭代者(應該這麼稱呼?),coin為coins中的元素,用範測1來說coin=1,裡面的for迴圈跑完之後coin再變2,然後再變5                          
            for (int i=coin;i<=amount;i++){            //從最小的幣值開始跑,跑到目標值              
                dp[i]=min(dp[i],dp[i-coin]+1);         //還不知道怎麼解釋                 
            }                          
        }                          
        if (dp[amount]>=amount+1){                     //還不知道怎麼解釋     
            return -1;                                                    
        }                          
        else{                                                    
            return dp[amount];                                                    
        }
    }
};
