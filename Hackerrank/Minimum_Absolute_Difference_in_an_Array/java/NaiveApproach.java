package Minimum_Absolute_Difference_in_an_Array.java;

public class NaiveApproach {
    public static void main(String[] args) {
        int arr[] = {3,-7,0};
        int minDiff = Integer.MAX_VALUE;
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length-1; j++) {
                int diff = arr[j] - arr[j+1];
                System.out.println("Diff for : "+arr[j] + " and "+ arr[j+1] + " is: " + diff);
            }
        }
    }
}
