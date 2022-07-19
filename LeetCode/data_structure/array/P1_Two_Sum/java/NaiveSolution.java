import java.util.Arrays;

class NaiveSolution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    result[0] = i;
                    result[1] = j;
                }
            }
        }
        return result;
    }

    public static void main(String[] args) {
        NaiveSolution naiveSol = new NaiveSolution();
        match(naiveSol.twoSum(new int[] { 3, 2, 4 }, 6), new int[] { 1, 2 });
        match(naiveSol.twoSum(new int[] { 2, 7, 11, 15 }, 9), new int[] { 0, 1 });
        match(naiveSol.twoSum(new int[] { 3, 3 }, 6), new int[] { 0, 1 });

    }

    private static void match(int[] actual, int[] expected) {
        if (Arrays.equals(actual, expected))
            System.out.println("Values are equal");
        else
            System.out.println("Values are not equal");
    }

}
