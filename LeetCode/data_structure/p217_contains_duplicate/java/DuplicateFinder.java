import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class DuplicateFinder {
    public static void main(String[] args) {
        System.out.println(containsDuplicate(new int[] { 1, 2, 3, 1 })); // true
        System.out.println(containsDuplicate(new int[] { 1, 2, 3, 4 })); // false
        System.out.println(containsDuplicate(new int[] { 1, 1, 3, 3, 4, 3, 2, 4, 2 })); // true
    }

    private static boolean containsDuplicate(int[] nums) {
        Map<Integer, Integer> numsContainer = new HashMap<>();
        for (Integer num : nums) {
            if (numsContainer.containsKey(num)) {
                return true;
            }
            numsContainer.put(num, 1);
        }
        return false;
    }
}