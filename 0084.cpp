class Solution{
public:
    int largestRectangleArea(vector<int>& heights){
        stack<int> st;
        heights.insert(heights.begin(),0);                   // 將元素 0 添加到數組的頭部
        heights.push_back(0);                                // 數組尾部加入元素0
        st.push(0);
        int result = 0;
        for (int i=1;i<heights.size();i++) {                 //第0元素已經入stack，從第1個開始
            while (heights[i]<heights[st.top()]){
                int mid=st.top();
                st.pop();
                int w=i-st.top()-1;                          //注意heights[i] 是和heights[st.top()] 比較
                int h=heights[mid];
                result=max(result,w*h);
            }
            st.push(i);
        }
        return result;
    }
};
