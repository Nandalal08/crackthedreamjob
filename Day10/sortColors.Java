// Given an array nums with n objects colored red, white, or blue, sort
//  them in-place so that objects of the same color are adjacent, 
// with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.
public class sortColors {
    public static void main(String[] args) {
        int nums[] = {1, 0, 2, 2};
        sortColors obj = new sortColors();
        obj.sortColorsFinding(nums);

        // Print the sorted array
        for (int num : nums) {
            System.out.print(num + " ");
        }
    }

    public void sortColorsFinding(int nums[]) {
        int start = 0;
        int mid = 0;
        int end = nums.length - 1;

        while (mid <= end) {
            switch (nums[mid]) {
                case 0:
                    swap(nums, start, mid);
                    start++;
                    mid++;
                    break;

                case 1:
                    mid++;
                    break;

                case 2:
                    swap(nums, mid, end);
                    end--;
                    break;
            }
        }
    }

    public void swap(int arr[], int pos1, int pos2) {
        int temp = arr[pos1];
        arr[pos1] = arr[pos2];
        arr[pos2] = temp;
    }
}
