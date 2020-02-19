import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int da,ma,ya,de,me,ye,d,m,y;
        int fine = 0;

        da = sc.nextInt();
        ma = sc.nextInt();
        ya = sc.nextInt();
        de = sc.nextInt();
        me = sc.nextInt();
        ye = sc.nextInt();

        if(ya > ye)
            fine = 10000;
        else if(ma > me && (ya >=ye))
            fine = 500 * (ma - me);
        else if(da > de && (ma >= me) && (ya >=ye))
            fine = 15 * (da - de);
        else
            fine = 0;
        System.out.println(fine);
    }
}
