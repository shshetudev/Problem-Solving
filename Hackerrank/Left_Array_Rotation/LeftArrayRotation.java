package Left_Array_Rotation;

import java.util.Scanner;

public class LeftArrayRotation {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int d = scan.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[(i+n-d)%n] = scan.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        scan.close();
    }
    
}
