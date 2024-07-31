package agust;

import java.util.Scanner;

public class BOJ14467 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] log = new int[n + 1]; // 소의 위치를 체크하는 배열
        boolean[] isDetected = new boolean[n + 1]; // 처음 관찰하는 경우인지 체크하는 배열
        int res = 0;

        for (int i = 0; i < n; i++) {
            int cow = scanner.nextInt(); // 소 번호
            int location = scanner.nextInt(); // 소 위치

            // case1 : 소를 처음 관측한 경우
            if (!isDetected[cow]) {
                isDetected[cow] = true;
                log[cow] = location;
            }

            // case2 : 소를 한 번 이상 관측한 경우
            else {
                // case2.1 : 소의 위치가 이전 관측한 위치와 다른 경우
                if (log[cow] != location) {
                    res++;
                    log[cow] = location;
                }
            }
        }

        System.out.println(res);
    }
}
