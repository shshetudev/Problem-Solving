package Array_Manipulation;

import java.util.Scanner;

public class ArrayManipulation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        long[] arr = new long[n];
        int lower,upper,sum;
        for(int i=0;i<n;i++)
            arr[i] = 0;
        for(int j=0;j<m;j++) {
            lower = in.nextInt();
            upper = in.nextInt();
            sum = in.nextInt();
            arr[lower-1] += sum;
        if(upper < n)
            arr[upper] -= sum;
        }
        long max = 0;
        long temp = 0;
        for(int i=0;i<n;i++) {
            temp += arr[i];
        if(temp > max)
            max = temp;
        }
        System.out.println(max);
        in.close();
    }
}
