import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static long summation (long n){
        return (n *(n + 1))/2;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        long n;
        while (t > 0)
        {
            n = scanner.nextInt();
            n -= 1;
            System.out.println((summation(n / 3) * 3) + (summation(n / 5) * 5) - (summation(n / 15) * 15));
            t--;
        }
    }
}
