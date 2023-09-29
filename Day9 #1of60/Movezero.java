
// LEETCODE 2

// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]

// import java.util
public class Movezero {

    public static void main(String[] args)
    {

        int nums[] = { 1,0,2,0,3};
        Movezero obj = new Movezero();
        obj.Movezeros(nums);

        for(int num : nums)
        {
            System.out.print(num);
        }
    }
    


public void Movezeros(int nums[])
{
    int insertP =0;
    for(int i =0;i<nums.length;i++)
    {
        if(nums[i]!=0)
        {
            nums[insertP] = nums[i];
            insertP++;
        }
    }
    while(insertP < nums.length)
    {
        nums[insertP] =0;
        insertP++;

    }

}
}
 