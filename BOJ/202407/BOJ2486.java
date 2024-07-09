package july;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;

public class BOJ2486 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        while (true) {
            StringTokenizer str = new StringTokenizer(br.readLine(), " ");
            String target = str.nextToken();
            if (target.equals("#")) {
                break;
            }
            int targetCount = 0;
            while (str.hasMoreTokens()) {
                // indexOf() 메서드를 활용해 문자열 내부의 특정 문자 갯수 탐색.
                String sentence = str.nextToken();
                sentence = sentence.toLowerCase();
                target = target.toLowerCase();
                int pos = sentence.indexOf(target);
                while (pos > -1) {
                    targetCount++;
                    pos = sentence.indexOf(target, pos + 1);
                }
            }
            System.out.println(target + " " + targetCount);
        }
    }
}

/**
 * 1. IndexOf를 활용한 문자열 탐색
 * 2. toLowerCase를 활용한 대소문자 비교
 */
