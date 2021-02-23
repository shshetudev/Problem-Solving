package Minimum_Absolute_Difference_in_an_Array;

import java.util.Scanner;

public class MinimumAbsoluteDifferenceInAnArray {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int minimumSum = Integer.MAX_VALUE;
        int array[] = new int[n];
        for (int i = 0; i < n; i++) 
            array[i] = scan.nextInt();

        for (int i = 0; i < n-1; i++) {
            int subtractValue = array[i] - array[i+1];
            minimumSum = ;
        }
    }
}
