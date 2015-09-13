import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String main_string = scanner.nextLine();
        int range = scanner.nextInt();
        String min = main_string.substring(0, range);
        String max = main_string.substring(0, range);
        for(int i = 1; i <= main_string.length() - range; i++)
        {
            if(min.compareTo(main_string.substring(i, i + range)) > 0) min = main_string.substring(i, i + range);
            if(max.compareTo(main_string.substring(i, i + range)) < 0) max = main_string.substring(i, i + range);
        }
        System.out.println(min);
        System.out.println(max);
    }
}
