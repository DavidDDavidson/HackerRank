import java.io.*;
import java.util.*;

public class Solution {

   static boolean isAnagram(String A, String B) {
        if(B.length() != A.length()) return false;
        A = A.toLowerCase();
        B = B.toLowerCase();
        for (int i = 0; i < A.length(); i++)
        {
            for (int j = 0; j < B.length(); j++)
            {
                if(A.charAt(i) == B.charAt(j))
                {
                    B = (j == B.length() - 1) ? B.substring(0, j) : B.substring(0, j) + B.substring(j + 1);
                    break;
                }
            }
        }
        if(B.length() != 0) return false;
        else return true;

   }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = sc.next();
        boolean ret = isAnagram(A,B);
        if (ret) System.out.println("Anagrams");
        else System.out.println("Not Anagrams");
    }
}
