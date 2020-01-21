import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        int a = 0;

        do 
        {
            System.out.println((++a) + " " + str);
            if(sc.hasNextLine())
                str = sc.nextLine();
            else
                str = null;
        }
        while(str!=null);

        sc.close();
    }
}


