import java.util.Scanner;

public class WordCapitalization {
    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            String word = input.next();
            if(word.length()>0)
            word = ("" + word.charAt(0)).toUpperCase() + word.substring(1);
            System.out.println(word);
        }
    }
}