
public class RemoveDuplicate{

    public static void main(String[] args)
    {
        int nums[] ={0,0,1,1,1,2,2,3,3,4};

        RemoveDuplicate obj = new RemoveDuplicate();
         int newLength= obj.Removeobject(nums);
        for (int i = 0; i <=newLength; i++) {
            System.out.println(nums[i]);
        }
    }

    public int Removeobject(int nums[])
    {
        int uniqueElement = nums[0];
        int elementCount = 1;

        for(int i =0;i<nums.length;i++)
        {
            if(nums[i] != uniqueElement)
            {
                nums[elementCount] = nums[i];
                uniqueElement = nums[i];
                elementCount++;
            }
        }
        return uniqueElement;

    }
}