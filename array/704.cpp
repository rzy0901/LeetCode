// divide and conquer (二分法)
// https://leetcode.cn/problems/binary-search/description/

#include <iostream>
#include <vector>  

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target){
                right = mid - 1;
            }else if (nums[mid] < target){
                left = mid + 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    Solution solution;
    int result = solution.search(nums, target);
    cout << result << endl;
    return 0;
}