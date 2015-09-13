import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            try
            {
                long x = sc.nextLong();
                System.out.println(x+" can be fitted in:");
                /* Two's Complement */
                /* 2^8 values */
                if(x >= Byte.MIN_VALUE && x <= Byte.MAX_VALUE)System.out.println("* byte");
                /* 2^16 values */
                if(x >= Short.MIN_VALUE && x <= Short.MAX_VALUE)System.out.println("* short");
                /* 2^32 values */
                if(x >= Integer.MIN_VALUE && x <= Integer.MAX_VALUE)System.out.println("* int");
                /* 2^64 values */
                if(x >= Long.MIN_VALUE && x <= Long.MAX_VALUE)System.out.println("* long");
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
}
