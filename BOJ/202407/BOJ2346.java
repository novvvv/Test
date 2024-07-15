package july;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.reflect.Array;
import java.util.*;

public class BOJ2346 {
    public static void main(String[] args) throws IOException {

        // input value
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        StringTokenizer str = new StringTokenizer(br.readLine(), " ");

        // logic
        ArrayList<Integer> res = new ArrayList<>();
        Deque<int[]> balloons = new ArrayDeque<>();
        int[] pair = new int[2];

        // add element

        int index = 1;
        while (str.hasMoreTokens()) {
            String token = str.nextToken();
            balloons.addLast(new int[]{index, Integer.parseInt(token)});
            index++;
        }

        while (!balloons.isEmpty()) {

            int[] balloon = balloons.pollFirst(); // 덱의 가장 앞에 있는 풍선 정보. null ? why ?
            if (balloon == null) break; // 덱이 비어 있으면 루프 종료
            int balloonIndex = balloon[0]; // 풍선 번호
            int balloonValue = balloon[1]; // 풍선 안에 들어있는 값
            res.add(balloonIndex); // 풍선 인덱스를 정답 배열에 추가

            // case1 : 풍선 내부 값이 양수인 경우.
            if (balloonValue > 0) {
                while (true) {
                    balloonValue--;
                    if (balloonValue < 1) {
                        break;
                    }
                    int[] tempBalloon = balloons.peek();
                    if (tempBalloon == null) break; // 덱이 비어 있으면 루프 종료
                    balloons.poll();
                    balloons.addLast(tempBalloon);
                }
            }

            // case2 : 풍선 내부 값이 음수인 경우
            else {
                balloonValue = Math.abs(balloonValue);
                while (true) {
                    balloonValue--;
                    if (balloonValue < 0) {
                        break;
                    }
                    int[] tempBalloon = balloons.peekLast();
                    if (tempBalloon == null) break; // 덱이 비어 있으면 루프 종료
                    balloons.pollLast();
                    balloons.addFirst(tempBalloon);
                }
            }
        }

        for (Integer re : res) {
            System.out.print(re + " ");
        }
    }
}

// queue 내부에 array 선언하는 방법?


/**
 * 1 ~ n 개의 풍선
 * i번 풍선 오른쪽에는 i + 1 번 풍선, 왼쪽이는 i - 1번 풍선이 존재한다.
 * 1. 가장 먼저 1번 풍선을 터뜨린다.
 * 2. 풍선 내부에 존재하는 값 만큼 이동하여 다음 풍선을 터뜨린다.
 * (양수가 적혀 있는 경우 오른쪽, 음수가 적혀 있는 경우 왼쪽으로 이동한다.)
 * ex) [1번, 3] [2번, 2] [3번, 1] [4번, -3] [5번, -1]
 * -> 4번 풍선.
 * after -> [4번, -3] [5번, -1] [2번, 2] [3번, 1]
 */
