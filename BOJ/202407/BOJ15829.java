package july;
import java.util.Scanner;

public class BOJ15829 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int L = input.nextInt();
        input.nextLine();
        String sequence = input.nextLine();
        char[] sequenceArray = sequence.toCharArray();
        long sum = 0;
        long pow = 1;
        for (int i = 0; i < sequenceArray.length; i++) {
            sum = sum + (sequenceArray[i] - 96) * pow;
            pow = (pow * 31) % 1234567891;
        }
        sum = sum % 1234567891;
        System.out.println(sum);
    }
}



/**
 * hashing
 * 입력으로 들어오는 값은 "영문 소문자" 로만 구성된다. a ~ z (1 ~ 26)
 * 문자열 abba = 1, 2, 2, 1
 *
 * first-line : 문자열의 길이 L
 * second-line : 영문 소문자로 이루어진 문자열
 */
