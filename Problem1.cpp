// Time Complexity : O(n)
// Space Complexity : O(n)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this :

// Save number as a key and index as a value while iterating over array
// if difference of target - nums[i] is already present in map, return i and value
// for key = difference

class Solution {
    public int[] twoSum(int[] nums, int target) {
        if( nums == null || nums.length ==0){
            int res []={-1,-1}; 
            return res;
        }

        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i =0; i<nums.length; i++){

            //check if other number already in hashmap
            if(map.containsKey(target-nums[i])){
                int res[] = {i, map.get(target-nums[i])};
                return res;
            }
            map.put(nums[i], i);
        } 
        return new int[] {-1,-1};
    }
}