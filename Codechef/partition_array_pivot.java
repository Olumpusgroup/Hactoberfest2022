import java.util.Arrays;

class Solution {

    public int[] pivotArray(int[] nums, int pivot) {
        Arrays.sort(nums);
        int c=0;
        for(int i=0;i<nums.length;i++) {
            if (pivot == nums[i]) {
                c = i;
                break;
            }
        }
        for (int i = 0; i < c-1; i++) {
            for (int j = 0; j < c - i - 1; j++) {
                if (nums[j] < nums[j + 1]) {
                    // swap nums[j+1] and nums[j]
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }


        for (int i = c+1; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] < nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
            return nums;
    }

    public static void main(String[] args) {
        int[] arr= {9,12,5,10,14,3,10};
        int pivot=10;
        Solution o=new Solution();
        System.out.println(Arrays.toString(o.pivotArray(arr,pivot)));
    }
}