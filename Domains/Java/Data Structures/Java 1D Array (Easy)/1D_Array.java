import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        if(1 >= n && n <= 100)
        {
          int[] a = new int[n];
          for(int i = 0; i < n; i++)
          {
            a[i] = scanner.nextInt();
          }
          int neg_sub = 0;
          for(int i = 1; i < a.length; i++)
          {
              int sum = 0;
              for(int j = 0; j < a.length; j++)
              {
                  sum += a[j];
              }
              if(sum < 0) neg_sub++;
          }
          System.out.print(neg_sub);
        }
    }
}
