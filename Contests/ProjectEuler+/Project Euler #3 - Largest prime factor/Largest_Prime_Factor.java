import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = scanner.nextLong();
        long n;
        while(t > 0)
        {
          long p = 1;
          n = scanner.nextLong();
          for(long i = 2; i * i <= n; i++)
          {
            while(n % i == 0)
            {
              p = i;
              n /= i;
            }
            if(n > p) p = n;
          }
          System.out.println(p);
          t--;
        }
    }
}
