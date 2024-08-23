package Java_Algorithm;

public class java_6_1_3_5 {
    public static void selection_sort(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            int min = i;
            for (int j = i + 1; j < array.length; j++) {
                if (array[min] > array[j]) {
                    min = j;
                }
            }
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }

    public static void insertion_sort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int now = i;
            for (int j = i; j > 0; j--) {
                if (array[j] < array[j - 1]) {
                    int temp = array[j];
                    array[j] = array[j - 1];
                    array[j - 1] = temp;
                } else break;
            }
        }
    }

    public static void run_quick_sort(int[] array, int start, int end) {
        if (start >= end) return;
        int pivot = start;
        int left = start + 1;
        int right = end;

        while (left <= right) {
            while (left <= end && array[left] <= array[pivot]) left++;
            while (right > start && array[right] >= array[pivot]) right--;

            if (left > right) {
                int temp = array[right];
                array[right] = array[pivot];
                array[pivot] = temp;
            } else {
                int temp = array[left];
                array[left] = array[right];
                array[right] = temp;
            }
        }

        run_quick_sort(array, start, right - 1);
        run_quick_sort(array, right + 1, end);
    }

    public static void quick_sort(int[] array) {
        run_quick_sort(array, 0, array.length - 1);
    }

    public static void main(String[] args) {
        int[] array1 = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
        int[] array2 = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
        int[] array3 = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};

        selection_sort(array1);
        insertion_sort(array2);
        quick_sort(array3);

        System.out.println("Selection Sort: ");
        for (int i = 0; i < array1.length; i++) {
            System.out.print(array1[i] + " ");
        }
        System.out.println(" ");

        System.out.println("Insertion Sort: ");
        for (int i = 0; i < array2.length; i++) {
            System.out.print(array2[i] + " ");
        }
        System.out.println(" ");

        System.out.println("Quick Sort: ");
        for (int i = 0; i < array3.length; i++) {
            System.out.print(array3[i] + " ");
        }
        System.out.println(" ");
    }
}
