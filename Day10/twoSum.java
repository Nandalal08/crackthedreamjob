public class twoSum {
     public static void main(String[] args) {
        int nums[] = {2,7,11,15};
        int x = 9;
        twoSum obj = new twoSum();
        obj.twosumming(nums,x);

        // Print the sorted array
       
    }

    public void twosumming(int nums[],int x)
    {
        int n = nums.length;
        int l =0;
        int r = n-1;
        boolean found = false;

        while(l<=r)
        {
            if(nums[l] + nums[r] == x)
            {
                System.out.println(l+" "+r);
                found = true;
                break;
            }
            else if(nums[l] + nums[r] <x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if(!found)
        {
            System.out.print("no pair exist");
        }
        

    }
}
