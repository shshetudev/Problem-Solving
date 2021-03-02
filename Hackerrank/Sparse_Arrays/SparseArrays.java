package Sparse_Arrays;

import java.util.Scanner;

public class SparseArrays {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        String inputArr[] = new String[n];
        for(int i=0;i<n;i++)
            inputArr[i] = scan.next();
        int q = scan.nextInt();
        String queryArr[] = new String[q];
        int resultArr[] = new int[q];
        for(int i=0;i<q;i++){
            int count = 0;
            queryArr[i] = scan.next();
        for(int j=0;j<n;j++){
            if(inputArr[j].equals(queryArr[i])) {
                count++;  
            }
        }
        resultArr[i] = count; 
        }
        
        for(int i=0;i<q;i++)
            System.out.println(resultArr[i]+" ");
    
        scan.close();
    }
}
