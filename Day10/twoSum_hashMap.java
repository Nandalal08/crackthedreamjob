import java.util.HashMap;
import java.util.Map;

import javax.print.attribute.IntegerSyntax;

public class twoSum_hashMap {
     public static void main(String[] args) {
        int nums[] = {3,2,4};
        int x = 6;
        twoSum_hashMap obj = new twoSum_hashMap();
        int []result =obj.twosumming(nums,x);

        if(result !=null)
        {
            System.out.println(result[0] + ","+ result[1]);
        }

        // Print the sorted array
       
    }

    public int[] twosumming(int nums[],int x)
    {
            //crete a hash map
            Map<Integer,Integer> map = new HashMap<>();
            int n = nums.length;

            for(int i =0;i<n;i++)
            {
                if(map.containsKey(x-nums[i]))
                {
                    return new int[]{map.get(x-nums[i]),i};
                }
                else
                {
                map.put(nums[i],i);
                }
            }
            return null;


    }
}


//the algorithm for this 

// 1. create a HashMap
// for here the HashMap is called Map
// Map <Integer,Integer>map = new HashMap<>();

// 2. iterate through the nums array

// 3. check if our target that is x-  nums[i] is contained within the HashMap
// using map.containsKey

// 4. if it does contain we return that value using map.get(x- nums[i],i) i is the indices

// 5. if it does not we return the nums[i] , i 

// 6. else null;
