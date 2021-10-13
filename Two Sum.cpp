/* Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/
//CODE
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> ht; //hash table
        for(int i = 0; i < nums.size(); i++){
            if(ht.find(target - nums[i]) != ht.end()){ //if target- nums[i] is present and its not pointing to the end of HT
                ans.push_back(ht[target-nums[i]]);  //insert it into ans
                ans.push_back(i);                   //insert the index
                return ans;
            }
            ht[nums[i]] = i; // if not present in HT, store the current nums[i]
        }
        return ans;
    }
};
