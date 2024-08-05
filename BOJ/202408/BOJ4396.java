import java.util.Scanner;

public class BOJ4396 {


    static int n = 0; // 보드 크기
    static char[][] board = new char[99][99]; // n * n 크기 보드
    static char[][] checkBoard = new char[99][99]; // 탐색 여부 체크 보드
    static char[][] resBoard = new char[99][99]; // 정답 출력 보드
    static boolean isBombed = false; // 지뢰를 밟았는 지 확인할 변수


    // 탐색 함수 & 로직
    static int[] dx = {0, 0, -1, 1, -1, -1, 1, 1};
    static int[] dy = {-1, 1, 0, 0, -1, 1, -1, 1};
    public static int searchDfsFunction(int x, int y) {
        int bombCnt = 0;
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 & nx < n && ny < n) {
                if (board[nx][ny] == '*') bombCnt++;
            }
        }
        return bombCnt;
    }

    public static void main(String[] args) {

        /**
         * Input Value 1
         * n * n 크기의 보드를 생성 후 입력
         * (.) -> 지뢰가 없는 지점
         * (*) -> 지뢰가 있는 지접
         */
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        scanner.nextLine();

        board = new char[n][n];
        for (int i = 0; i < n; i++) {
            String boardRow = scanner.nextLine();
            for (int j = 0; j < n; j++) {
                board[i][j] = boardRow.charAt(j);
            }
        }

        /**
         * Input Value 2
         * (x) -> 열린칸
         * (.) -> 아직 열리지 않은 칸
         */
        checkBoard = new char[n][n];
        for (int i = 0; i < n; i++) {
            String boardRow = scanner.nextLine();
            for (int j = 0; j < n; j++) {
                checkBoard[i][j] = boardRow.charAt(j);
            }
        }

        /**
         * 탐색 수행 로직
         * resBoard -> 정답 보드
         */
        resBoard = new char[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (checkBoard[i][j] == 'x') {
                    int bombCnt = searchDfsFunction(i, j); // 8방향 지뢰 탐색
                    if (board[i][j] == '*') isBombed = true; // 지뢰를 밟은 경우
                    resBoard[i][j] = Integer.toString(bombCnt).charAt(0);
                }

                else if (checkBoard[i][j] == '.') {
                    resBoard[i][j] = '.';
                }
            }
        }

        /**
         * 결과 출력 로직
         */

        // case1 : 폭탄을 밟은 경우
        if (isBombed) {
            for (int i = 0; i < n; i++) {

                for (int j = 0; j < n; j++) {

                    if (board[i][j] == '*') {
                        System.out.print('*');
                    }

                    else if (board[i][j] == '.') {
                        if (checkBoard[i][j] == 'x') {
                            System.out.print(resBoard[i][j]);
                        }
                        else {
                            System.out.print('.');
                        }
                    }
                }
                System.out.println();
            }
        }

        // case2 : 폭탄을 터트리지 않은 경우
        if (!isBombed) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(resBoard[i][j]);
                }
                System.out.println();
            }
        }
    }
}
