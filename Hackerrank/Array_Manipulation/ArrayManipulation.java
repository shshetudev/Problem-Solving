package Array_Manipulation;

import java.util.Scanner;

public class ArrayManipulation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); // column
        int m = in.nextInt(); // row
        int inputArr[][] = new int[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                inputArr[i][j] = in.nextInt();

        int arr[][] = new int[m+1][n];
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n;j++) {
                if(i==0) {
                    arr[i][j] = 0;
                } else {
                    int a = arr[];
                    int b = in.nextInt();
                    int k = in.nextInt();
                    arr[i][j]
                }
            }
        in.close();
    }
}
