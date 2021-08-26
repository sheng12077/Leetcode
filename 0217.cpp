class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mySet;    //建立集合set
        for(const int& num: nums){  //遍歷nums
            if(mySet.count(num))   //如果集合中已經存在該元素
                return true;
            mySet.insert(num);  //如果不存在，加入集合
        }
        return false;
    }
};
