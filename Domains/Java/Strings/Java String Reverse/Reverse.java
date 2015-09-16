import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String is_palindrome = "Yes";
        for(int i = 0; i < A.length() / 2; i++)
        {
            if(A.charAt(i) != A.charAt(A.length() - 1 - i)){
                is_palindrome = "No";
                break;
            }
        }
        System.out.println(is_palindrome);
    }
}
