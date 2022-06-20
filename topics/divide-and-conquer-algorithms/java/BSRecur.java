public class BSRecur {
    public static void main(String[] args) {
        int[] array = {3,4,5,6,7,8,9};
        int pos = binarySearch(array, 4, 0, array.length-1);
        if(pos == -1) {
            System.out.println("Not found");
        } else {
            System.out.println("Found at index " + pos);
        }
    }

    static int binarySearch(int[] array, int x, int low, int high) {
        if(high >= low) {
            int mid = (low + high)/2;
            if(array[mid] == x) {
                return mid;
            }
            if(x > array[mid]) {
                return binarySearch(array, x, mid+1, high);
            }
            else {
                return binarySearch(array, x, low, mid-1);
            }
        }
        return -1;
    }
}
