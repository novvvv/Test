package july;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Iterator;
import java.util.StringTokenizer;

public class BOJ10816 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        HashMap<Integer, Integer> cards = new HashMap<>();
        int n = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i = 0; i < n; i++) {
            int card = Integer.parseInt(st.nextToken());
            if (!cards.containsKey(card)) {
                cards.put(card, 1);
            }
            else {
                cards.put(card, cards.get(card) + 1);
            }
        }

        int m = Integer.parseInt(br.readLine());
        st = new StringTokenizer(br.readLine(), " ");
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < m; i++) {
            int targetCard = Integer.parseInt(st.nextToken());
            if (cards.containsKey(targetCard)) {
                sb.append(cards.get(targetCard) + " ");
            } else {
                sb.append(0 + " " );
            }
        }
        System.out.println(sb.toString().trim());
    }
}

/**
 * 숫자카드 2
 * 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 몇개 가지고 있는지 파악.
 * input data
 * 1st-line n : 상근이가 가지고 있는 숫자 카드의 개수
 * 2nd-line : 숫자 카드에 적혀있는 정수 (-10,000,000 <= x <= 10,000,000)
 * 3rd-line M : (1 <= M <= 500,000)
 * 4th-line : 상근이가 몇개 가지고 있는 숫자 카드인지 구해야 할 m개의 정수
 */

/**
 * 해당 문제로 부터 공부할 점.
 * 1. bufferedReader, StringBuilder, StringTokenizer를 사용한 시간 최적화.
 * 2. hashmap 자료구조 사용방법.
 */
