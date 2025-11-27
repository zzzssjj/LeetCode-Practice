#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;//通过创建一个哈希表来保存整数->下标的映射
        for (int i = 0; i< nums.size(); i++){//创建一个循环，遍历每一个数
            int need = target - nums[i];//遍历整个数组并做减法找到第二个数

            if(mp.count(need)){//如果该数已存在于哈希表，则找到答案

                return {mp[need], i};//mp[need]为该数的下标
                
            }
           mp[nums[i]] = i;//若没找到，则要将其存于哈希表，防止出现一个数重复出现的情况
        }
        return {};//返回空向量意味着没找到
    }
};

