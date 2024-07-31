package agust;

import java.io.*;
import java.util.Stack;

public class BOJ9935 {
    public static void main(String[] args) throws IOException {

        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        String str = input.readLine(); // 문자열
        String target = input.readLine(); // 폭발 문자열
        Character targetFinal = target.charAt(target.length() - 1); // 폭발 문자열 마지막 글자

        Stack<Character> stk = new Stack<>();
        Stack<Character> cmpStk = new Stack<>();

        for (int i = 0; i < str.length(); i++) {

            stk.push(str.charAt(i));
            if (stk.peek() == targetFinal && stk.size() >= target.length()) {

                StringBuilder cmp = new StringBuilder();
                for (int j = 0; j < target.length(); j++) {
                    cmpStk.push(stk.peek());
                    cmp.append(stk.pop());
                }

                cmp.reverse();
                if (cmp.toString().equals(target)) {
                    while (!cmpStk.isEmpty()) {
                        cmpStk.pop();
                    }
                }

                else {
                    while (!cmpStk.isEmpty()) {
                        stk.push(cmpStk.pop());
                    }
                }
            }

        }

        StringBuilder sb = new StringBuilder();
        for (Character c : stk) {
            sb.append(c);
        }
        if (sb.length() == 0) {
            System.out.print("FRULA");
        } else {
            System.out.print(sb.toString());
        }

    }
}

/**
 * 문자열폭발
 * 단순 문자열 탐색으로는 시간 초과 발생 O(N^2)
 * 1. 입력받은 문자열에서 폭발 문자열이 탐색 되는 지 확인
 * 2. 폭발 문자열이 존재한다하면 해당 문자열을 제거 후, 새로운 문자열 생성
 * -> 문자열이 비어 있거나, 폭발 문자열이 존재하지 않을 때 까지 다음 동작을 반복.
 */
