#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);// 创建结果数组，大小为 2*n（题目保证 nums.size() == 2*n）
        // i 从 0 到 n-1，代表每一对 (xi, yi)
        for(int i = 0;i < n; ++i){
            ans[i * 2] = nums[i];
            // 偶数下标（0, 2, 4, ...）放前半部分的元素 xi
            ans[i * 2 + 1] = nums[n + i];
            // 奇数下标（1, 3, 5, ...）放后半部分的元素 yi
        }
        return ans;// 返回交错排列后的新数组
    }
};