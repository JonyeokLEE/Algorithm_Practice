package Java_Algorithm;

public class java_6_1 {
    public static void selection_sort(int[] array) {
        for (int i = 0; i < array.length-1; i++) {
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

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println(" ");
    }
    public static void insertion_sort(int[] array){
        for(int i=1;i<array.length;i++){
            int now = i;
            for(int j=i;j>0;j--){
                if(array[j]<array[i])
            }
        }
    }
    public static void main(String[] args) {
        int[] array = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
        selection_sort(array);
        insertion_sort(array);
    }
}
