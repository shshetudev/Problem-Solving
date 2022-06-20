public class BSIter {
    public static void main(String[] args) {
        int[] array = {3,4,5,6,7,8,9};
        int pos = binarySearch(array, 4, 0, array.length-1);
        if(pos == -1) {
            System.out.println("Not found");
        } else {
            System.out.println("Found at index " + pos);
        }
    }

    static int binarySearch(int array[], int x, int low, int high) {
        while(high >= low) {
            int mid = (high+low)/2;
            if(x == array[mid]) {
                return mid;
            }
            else if (x > array[mid]) {
                low = mid + 1;
            }
            else {
                high = mid -1;
            }
        }
        return -1;
    }
}
