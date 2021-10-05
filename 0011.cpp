class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0;  //left
        int j=height.size()-1;  //right
        while(i<j){
            if(height[i]>=height[j]){
                ans=max(ans,height[j]*(j-i));
                j--;
            }
            else{
                ans=max(ans,height[i]*(j-i));
                i++;
            }
        }
        return ans;
    }
};
