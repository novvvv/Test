package july;

import java.util.Scanner;

public class BOJ30458 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String str = scanner.next();

        // 아스키 a = 97
        int[] arr = new int[26];
        for (int i = 0; i < n / 2; i++) {
            arr[str.charAt(i) - 97] += 1;
            arr[str.charAt(str.length() - 1 - i) - 97] += 1;
        }

        for (int i : arr) {
            System.out.print(i + " ");
        }

        System.out.print(anagram(arr));

    }

    public static String anagram(int[] arr) {
        for (int k = 0; k < arr.length; k++) {
            if (arr[k] % 2 == 1) return "No";
        }
        return "Yes";
    }
}
