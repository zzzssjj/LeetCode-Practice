#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;                    // 左边界（包含）
        int right = nums.size() - 1;     // 右边界（包含），注意这里要 -1！
                                         // 原代码写成 nums.size() 会导致越界
        
        // 当 left <= right 时，搜索区间还有元素
        while (left <= right) {
            // 防止整数溢出写法：left + (right - left) / 2 
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;              // 找到目标，直接返回下标
            }
            else if (nums[mid] > target) {
                right = mid - 1;         // 目标在左半区
            }
            else { // nums[mid] < target
                left = mid + 1;          // 目标在右半区
            }
        }
        
        // 循环结束说明没找到
        return -1;
    }
};