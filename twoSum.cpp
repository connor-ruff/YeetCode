#include<iostream>
#include<vector>

class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target){

            std::vector<int> res;

            for (int i = 0; i < nums.size(); ++i){
                for (int j = i+1; j < nums.size(); ++j) {
                    if ( (nums.at(i) + nums.at(j)) == target) {
                        res.push_back(i);
                        res.push_back(j);
                        return res;
                    }
                }
            }

            res.push_back(-1);
            res.push_back(-1);

            return res;


        }
};

int main() {
    

    std::vector<int> nums {3,3};
    int target = 6;

    Solution s;
    std::vector<int> res = s.twoSum(nums, target);

    std::cout << "[" << res[0] << ", " << res[1] << "]" << std::endl;

    return 0;

}