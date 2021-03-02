package Left_Rotation;
import java.util.Scanner;

public class LeftRotationEfficient {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d = in.nextInt();
        int arr[] = new int[n];
        for(int i = 0;i<n;i++)
            arr[(i+n-d)%n] = in.nextInt();
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        in.close();
    }
}
