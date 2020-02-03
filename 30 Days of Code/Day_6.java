import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine();

        for(int j = 0; j < t; j++)
        {
            String str = "";

            if(sc.hasNextLine())
                str = sc.nextLine();

            String st1 = "", st2 = "";

            int l = str.length();

            for(int i = 0;i < l; i++)
            {
                if(i%2 == 0)
                    st1 = st1 + str.charAt(i);
                else
                    st2 = st2 + str.charAt(i);
            }

            System.out.println(st1 + " " + st2);
        }

    }
}
