public class duplicateNumber
{
    public static void main(String[]args)
    {

        int nums[] ={ 1,3,2,2};
        duplicateNumber obj = new duplicateNumber();
         int result = obj.duplicateNumberFinding(nums);
         System.out.print(result);
      
    }

    public int duplicateNumberFinding( int nums[])
    {
        
        int slow =0;
        int fast =0;
                //move slow at normal speed through array while fast at twice the speed
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow!=fast);

    slow =0;

    while(slow!=fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }


        return slow;
    }
}