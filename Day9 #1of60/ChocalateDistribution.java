import java.util.*;

public class ChocalateDistribution {
    
public static void main(String[]args){

    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;
    int n = arr.length;
    ChocalateDistribution obj = new ChocalateDistribution();

    int max = obj.ChocalateDistributionlist(arr,n,m);
    System.out.print(max);
}

    public int ChocalateDistributionlist(int arr[],int n,int m)
    {
        //incase if there are no chocolate. 
        if(m ==0 || n==0)
        {
        return 0;

        }
    //sorting the array
        Arrays.sort(arr);

    //incase if length of students is less thatn number of packets
    if(n<m)
    return -1;
    int max_d = Integer.MAX_VALUE;
    for(int i =0;i+m-1<n;i++)
    {
        int d = arr[i+m-1] - arr[i];
        if(d<max_d)
        {
            max_d= d;
        }

    }
return max_d;


    }
}


