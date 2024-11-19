package interview70;

public class MajorityElement {
    public int majorityElement(int[] nums) {
        int major = nums[0];
        int counter = 0;
        for (int n : nums) {
            if (counter == 0) {
                major = n;
                counter = 1;
            } else if (major == n) {
                counter++;
            } else {
                counter--;
            }
        }
        return major;
    }
}
