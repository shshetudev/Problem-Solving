package Minimum_Absolute_Difference_in_an_Array.java;

import java.util.Arrays;
import java.util.Scanner;

public class MinimumAbsoluteDifference {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        int minDiff = Math.abs(arr[0]-arr[1]);
        int diff = Math.abs(arr[n-1]-arr[n-2]);
        if (diff < minDiff) minDiff = diff;
        for (int i = 1; i < n-1; i++){
            diff = Math.min(Math.abs(arr[i]-arr[i-1]),Math.abs(arr[i]-arr[i+1]));
            if (diff < minDiff) minDiff = diff;
        }
        System.out.println(minDiff);
        in.close();
    }
}
