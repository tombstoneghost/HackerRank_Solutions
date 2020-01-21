import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";

        smallest = s.substring(0,k);
        largest = s.substring(0,k);
        
        int n = s.length()-k;

        for(int i=0;i<=n;i++)
        {
            String str = s.substring(i,i+k);

            if(smallest.compareTo(str)>0)
                smallest = str;
            if(largest.compareTo(str)<0)
                largest = str;
        }
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
