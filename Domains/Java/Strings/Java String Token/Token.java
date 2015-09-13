import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine().trim();
        if(s.length() != 0)
        {
            if(!(s.length() > 400000))
            {
                String[] words = s.split("[ !,?.\\_'@]+");
                System.out.println(words.length);
                for(int i = 0; i < words.length; i++) System.out.println(words[i]);
            }
        }
        else
        {
            System.out.println(0);
        }
    }
}
