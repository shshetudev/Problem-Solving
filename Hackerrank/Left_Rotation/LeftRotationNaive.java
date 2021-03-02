package Left_Rotation;
import java.util.Scanner;

public class LeftRotationNaive {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d = in.nextInt();
        int arr[] = new int[n];
        for(int i = 0;i<n;i++)
            arr[i] = in.nextInt();
        while(d-->0){
            int temp = arr[0];
            for(int i=0;i<n-1;i++)
                arr[i] = arr[i+1];
            arr[n-1] = temp;
        }
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        in.close();
    }
}
