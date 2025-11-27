#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // slow 指向下一个要被覆盖的位置（也是当前已经处理好、不等于 val 的元素个数）
        int slow = 0;
        
        // fast 负责遍历整个数组
        for (int fast = 0; fast < nums.size(); ++fast) {
            // 如果当前元素不是要删除的目标值，就把它“留下来”
            if (nums[fast] != val) {
                nums[slow] = nums[fast];  // 把 fast 位置的有效元素覆盖到 slow 位置
                ++slow;                   // 有效区域向后扩张一位
            }
            // 如果是 val，就直接跳过，slow 不动，相当于被“删除”
        }
        
        // 循环结束后，[0, slow) 区间内的元素都是不等于 val 的
        // slow 的值就是新数组的长度
        return slow;
    }
};
