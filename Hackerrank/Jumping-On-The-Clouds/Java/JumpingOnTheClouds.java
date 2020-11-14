import java.util.Scanner;

public class JumpingOnTheClouds {
public static void main(String[] args) {
    System.out.println("Give Input:");
   // take input
   try(Scanner input = new Scanner(System.in)){
    int numberOfClouds = input.nextInt();
    int[] cloudArray = new int[numberOfClouds];
    // take input
        for (int i = 0; i < cloudArray.length; i++) {
            cloudArray[i] = input.nextInt();
        }

    System.out.println("Count the array:");
    // count the array
    int count = 0;
    int k = 0;
    while(k<cloudArray.length){
        // if(cloudArray[])
    }
    for (int i = 0; i < cloudArray.length-2; i++) {
        if(cloudArray[i] == 0) {
            if(cloudArray[i+2] == 0) {
                count++;
                i=i+2;
            }
           
            // else if(cloudArray[i+1] == 0) count++;
        }
   }
   System.out.println(count-1);
}

}

}