import java.io.*;
import java.util.*;
import java.util.stream.Collectors;

public class Solution {

    public static void main(String[] args) {
    
        Scanner sc = new Scanner(System.in);

        int L = sc.nextInt();
        
        List<Integer> l1 = new ArrayList<Integer>();

        for(int i = 0; i < L; i++)
        {
            int temp = sc.nextInt();
            l1.add(temp);
        } 

        int T = sc.nextInt();

        for(int i = 0; i < T; i++)
        {
            String cmd = sc.next();
            
            if(cmd.equals("Insert"))
            {
                int pos = sc.nextInt();
                int val = sc.nextInt();

                l1.add(pos, val);
            }
            else if(cmd.equals("Delete"))
            {
                int pos = sc.nextInt();
                
                l1.remove(pos);
            }
        }

        System.out.println(String.join(" ", l1.stream().map(String::valueOf).collect(Collectors.toList())));

    }
}


