class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // Hash map to store numbers and their indices
        vector<int> result; // To store the result (indices of two numbers)
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the complement
            
            // Check if the complement exists in the map
            if (num_map.find(complement) != num_map.end()) {
                // Return the indices of the two numbers
                result.push_back(num_map[complement]);
                result.push_back(i);
                return result;
            }
            
            // Otherwise, store the current number with its index in the map
            num_map[nums[i]] = i;
        }
        
        return result; // In case no solution is found
    }
};
