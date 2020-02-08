import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;

	Difference(int[] temp)
    {
        elements = temp;
        maximumDifference = 0;
    }

    void computeDifference()
    {
        int n = elements.length;

        int max = 0, diff = 0;

        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                diff = Math.abs(elements[i] - elements[j]);
                if(diff > max)
                    max = diff;
            }
        }

        maximumDifference = max;
    }

} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
