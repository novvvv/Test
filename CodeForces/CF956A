import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ArrayDivisibility {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int testCase = input.nextInt();

        for (int i = 0; i < testCase; i++) {
            int n = input.nextInt();
            List<Integer> arr = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                arr.add(j + 1);
            }
            for (Integer integer : arr) {
                System.out.print(integer + " ");
            }
            System.out.println();
        }
    }
}


/**
 * 배열 a 는 정수 K에 대하여 다음 규칙을 따른다.
 * 배열의 인덱스 j가 k의 배수인 모든 j에 대하여, 해당 j에 있는 요소들의 합이 k로 나누어 떨어져야 한다.
 * 즉, 1 <= j <= n 인 모든 j에 대하여, j가 k의 배수인 경우, 배열 aj의 합이 k로 나누어 떨어지면 배열 a는 K에 대해 아름답다.
 * 주어진 n에 대하여 1 <= k <= n 인 모든 k에 대하여 아름다운 배열을 찾아라.
 * a3 = 1 + 4 + 9 ,
 */
