package interview70;

import java.util.HashMap;
import java.util.Map;

public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> map = new HashMap<>(); 

        for (int i = 0; i < nums.length; ++i) {
            int complement = target - nums[i];
            if (map.containsKey(complement)) {
                return new int[] { map.get(complement), i };
            }
            map.put(nums[i], i);
        }

        throw new IllegalArgumentException("No solution");
    }

    static public void showArray(int[] arr) {
        for (int each : arr) {
            System.out.printf("%d ", each);
        }
    } 

    public static void main(String[] args) {
        TwoSum twosum = new TwoSum();
        int[] arr = {2,11,7,15};
        int target = 9;
        int[] result = twosum.twoSum(arr, target);
        TwoSum.showArray(result);

    }
}
