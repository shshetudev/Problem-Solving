import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class RepeatedString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = in.next();
        int infiniteStrLength = in.nextInt();
        Character searchKey = 'a';
        String infiniteStr = generateInfiniteString(str,infiniteStrLength);
        Map<Character,Integer> map = includeStringToMap(infiniteStr);
        Integer occurenceOfA = countOccurencesOfA(map, searchKey);
        System.out.println(occurenceOfA);
    }

    // Generate an infinite String
    private static String generateInfiniteString(String inputString, int expectedLength) {
        int numberOfTimesToAdd = (expectedLength / inputString.length());
        int i = 0;
        while(i < numberOfTimesToAdd) {
            inputString += inputString;
            i++;
        }
        inputString = inputString.substring(0, expectedLength);
        return inputString;
    }

    // Count Occurance of A
    private static Integer countOccurencesOfA(Map<Character,Integer> strMap, char searchkey){
        return strMap.get(searchkey);
    }

    // Include the infinite String to a map
    private static Map<Character,Integer> includeStringToMap(String infiniteString){
        Map<Character,Integer> map = new HashMap<>();
        char[] charArray = infiniteString.toCharArray();
        for (int i = 0; i < charArray.length; i++) {
            if(map.containsKey(charArray[i])) {
                    map.put(charArray[i], map.get(charArray[i]) + 1);
            } else {
                map.put(charArray[i], 1);
            }
        }
        return map;
    }

}
