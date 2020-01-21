import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        
        System.out.println(A.length() + B.length());

        if(A.compareTo(B)>0)
            System.out.println("Yes");
        else
            System.out.println("No");
    
        System.out.println(firstCap(A) + " " + firstCap(B));
    }

    public static String firstCap(String s)
    {
        if(s == null || s.length() == 0)
            return "";
        else
            return s.substring(0,1).toUpperCase() + s.substring(1);
    }
}




