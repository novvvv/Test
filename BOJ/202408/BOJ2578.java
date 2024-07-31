package agust;

import java.util.Scanner;

public class BOJ2578 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // 1. 빙고칸을 2차원 배열 형태로 입력 받는다.
        int[][] bingo = new int[26][26];
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                bingo[i][j] = scanner.nextInt();
            }
        }

        // 2. 사회자가 부른 숫자를 체크할 2차원 boolean 배열을 생성한다.
        // 사회자가 숫자를 입력할 때 마다 빙고 조건에 부합하는 지 체크한다.

        boolean[][] check = new boolean[26][26];

        int bingoCount = 0;
        int count = 0;
        for (int i = 1; i <= 5; i++) {

            for (int j = 1; j <= 5; j++) {

                int data = scanner.nextInt(); // 사회자가 부르는 수
                for (int l = 1; l <= 5; l++) {
                    for (int m = 1; m <= 5; m++) {
                        if (bingo[l][m] == data) {

                            count++;
                            check[l][m] = true;

                            if (checkWidthBingo(l, check)) bingoCount++; // 가로줄 체크 O(N)
                            if (checkHeightBingo(m, check)) bingoCount++; // 세로줄 체크 O(N)

                            // 데이터의 인덱스 위치를 확인
                            int now = (l - 1) * 5 + m;

                            if (now == 1 || now == 7 || now == 13 || now == 19 || now == 25) {
                                if (checkLeftDiagonalBingo(check)) bingoCount++; // 대각선 체크 O(1)
                            }
                            if (now == 5 || now == 9 || now == 13 || now == 17 || now == 21) {
                                if (checkRightDiagonalBingo(check)) bingoCount++; // 대각선 체크 O(1)
                            }

                            // 빙고 개수가 3개 초과 시 루프 탈출
                            if (bingoCount >= 3) {
                                System.out.println(count);
                                return;
                            }
                        }
                    }
                }
            }

        }

    }

    /**
     * checkWidthBingo : 가로줄 체크 함수
     */
    public static boolean checkWidthBingo (int width, boolean[][] check) {
        for (int i = 1; i <= 5; i++) {
            if (!check[width][i]) {
                return false;
            }
        }
        return true;
    }

    /**
     * checkHeightBingo : 세로줄 체크 함수
     */
    public static boolean checkHeightBingo (int height, boolean[][] check) {
        for (int i = 1; i <= 5; i++) {
            if (!check[i][height]) {
                return false;
            }
        }
        return true;
    }

    /**
     * checkRightDiagonalBingo : 우상향 대각선 체크 함수
     */
    public static boolean checkRightDiagonalBingo (boolean[][] check) {
        if (!check[1][5]) return false;
        if (!check[2][4]) return false;
        if (!check[3][3]) return false;
        if (!check[4][2]) return false;
        if (!check[5][1]) return false;
        return true;
    }

    /**
     * checkLeftDiagonalBingo : 좌상향 대각선 체크 함수
     */
    public static boolean checkLeftDiagonalBingo (boolean[][] check) {
        if (!check[1][1]) return false;
        if (!check[2][2]) return false;
        if (!check[3][3]) return false;
        if (!check[4][4]) return false;
        if (!check[5][5]) return false;
        return true;
    }

}

