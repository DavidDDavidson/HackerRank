import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t > 0)
        {
          int a = scanner.nextInt();
          int b = scanner.nextInt();
          int n = scanner.nextInt();
          for(int i = 0; i < n; i++)
          {
            a += ((int) Math.pow(2.0, (double) i)) * b;
            System.out.print(a + " ");
          }
          System.out.println();
          t--;
        }
    }
}
