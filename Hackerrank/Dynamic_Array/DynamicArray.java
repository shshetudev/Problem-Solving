package Dynamic_Array;

import java.util.ArrayList;
import java.util.Scanner;

public class DynamicArray {
public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int N = scan.nextInt();
    int Q = scan.nextInt();
    ArrayList[] seqList = new ArrayList[N];
    for(int i=0;i<seqList.length;i++)
        seqList[i] = new ArrayList<>();
    int lastAns = 0;
    for(int i=0;i<Q;i++) {
        int choose = scan.nextInt();
        int x = scan.nextInt();
        int y = scan.nextInt();
        int index = (x^lastAns)%N;
        if(choose == 1) {
            seqList[index].add(y);
        }  
        else if(choose == 2){
            int value = y%(seqList[index].size());
            lastAns = (int) seqList[index].get(value);
            System.out.println(lastAns);
        }
            
    }
    scan.close();
    }
}
