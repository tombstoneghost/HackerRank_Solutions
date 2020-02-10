import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        int count = 0, sum = 0;

        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                for(int k = i; k <= j; k++)
                {
                    sum = sum + arr[k];
                }
                if(sum < 0)
                    count++;
                sum = 0;
            }
        }
        System.out.println(count);

    }
}


