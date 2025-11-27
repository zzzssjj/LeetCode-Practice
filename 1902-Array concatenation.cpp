#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();//得到原数组长度
        vector<int>ans(2*n);//分配好 2*n 的空间
        for (int i = 0;i < n;i++){//创建循环，将两个数组进行拼接
            ans[i] = nums[i];
            ans[i + n] = nums  [i];
        }
        return ans;//返回结果

    }
};