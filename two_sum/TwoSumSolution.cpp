//
// Created by Yunfeng on 2019-04-23.
//

#include <vector>

class TwoSumSolution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        long size = nums.size();
        for (int i = 0; i < size; i++) {
            int iValue = nums[i];
            for (int j = i + 1; j < size; j++) {
                if (iValue + nums[j] == target) {
                    std::vector<int> result;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        throw "invalid arguments";
    }
};