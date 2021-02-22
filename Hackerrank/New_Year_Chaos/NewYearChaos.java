package New_Year_Chaos;

import java.util.Scanner;

public class NewYearChaos {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        while (testCases-- > 0) {
            int n = scan.nextInt();
            int q[] = new int[n];
            for (int q_i = 0; q_i < n; q_i++)
                q[q_i] = scan.nextInt();

            int bribe = 0;
            boolean chaotic = false;
            for (int i = 0; i < n; i++) {
                if (q[i] - (i + 1) > 2) {
                    chaotic = true;
                    break;
                }
                for (int j = Math.max(0, q[i] - 2); j < i; j++)
                    if (q[j] > q[i])
                        bribe++;

            }
            if (chaotic)
                System.out.println("Too chaotic");
            else
                System.out.println(bribe);

        }
    }
}
