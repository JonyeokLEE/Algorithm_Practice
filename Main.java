import java.util.Scanner;

public class Main {
    public static boolean check(int h, int m, int s) {
        if ((h / 10 == 3) || (h % 10 == 3) || (m / 10 == 3) || (m % 10 == 3) || (s / 10 == 3) || (s % 10 == 3)) {
            return true;
        } else
            return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= 59; j++) {
                for (int k = 0; k <= 59; k++) {
                    if (check(i, j, k)) {
                        count++;
                    }
                }
            }
        }
        System.out.println(count);
    }
}