import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);

        int num;
        double d2;
        String s2="";
        
        num = scan.nextInt();
        d2 = scan.nextDouble();
        while(scan.hasNextLine())
        {
            s2 = scan.nextLine();
        }
        
        System.out.println(num + i);
        System.out.println(d2 + d);

        String f = s.concat(s2);

        System.out.println(f);

        scan.close();
    }
}
