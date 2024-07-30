package agust;

import java.util.Scanner;

public class BOJ21918 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(); // 전구 개수
        int m = scanner.nextInt(); // 명령어 개수
        int[] bulb = new int[n]; // 전구 상태 배열
        for (int i = 0; i < n; i++) {
            bulb[i] = scanner.nextInt();
        }

        // 명령어 로직
        for (int i = 0; i < m; i++) {

            // 명령어 입력
            int[] command = new int[3];
            for (int j = 0; j < command.length; j++) {
                command[j] = scanner.nextInt();
            }

            // * 1번 명령어 : [i x] i번째 전구 상태를 x(0, 1)로 변경
            if (command[0] == 1) {
                bulb[command[1] - 1] = command[2];
            }

            // * 2번 명령어 : [l r] l번째 ~ r번째 까지 전구 상태를 변경 0 -> 1, 1 -> 0
            if (command[0] == 2) {
                for (int a = command[1] - 1; a <= command[2] - 1; a++) {
                    if (bulb[a] == 1) bulb[a] = 0;
                    else bulb[a] = 1;
                }
            }

            //  * 3번 명령어 : [l r] l번째 ~ r번째 전구 상태를 0으로 세팅
            if (command[0] == 3) {
                for (int a = command[1] - 1; a <= command[2] - 1; a++) {
                    bulb[a] = 0;
                }
            }

            //  * 4번 명령어 : [l r] l번째 ~ r번째 전구 상태를 1로 세팅
            if (command[0] == 4) {
                for (int a = command[1] - 1; a <= command[2] - 1; a++) {
                    bulb[a] = 1;
                }
            }
        }

        for (int x : bulb) {
            System.out.print(x + " ");
        }
        System.out.println();

    }
}

/**
 * n개의 전구 맨 왼쪽 전구 첫 번째
 * 1 : 전구가 켜져 있는 상태
 * 0 : 전구가 꺼져 있는 상태
 * 전구 제어 명령어 1번 ~ 4번

 */
