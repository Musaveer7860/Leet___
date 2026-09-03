class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
          sort(nums.begin(),nums.end());
          int target = 0;

          set<vector<int>>result;

          for(int i = 0 ; i < nums.size() ; i++)
          {
            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right)
            {
                if(nums[i] + nums[left] + nums[right] == target)
                {
                      result.insert({nums[i], nums[left], nums[right]});
                      left++;
                      right--;
                }
                else if(nums[i] + nums[left] + nums[right] < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
          }

          return vector<vector<int>>(result.begin(),result.end());
    }
};