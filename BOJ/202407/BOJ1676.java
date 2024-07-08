package july;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;

public class BOJ1676 {
    public static void main(String[] args) throws IOException {

        // input data
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        // calculate factorial & convert to string
        StringBuilder sb = new StringBuilder();

        BigInteger big = new BigInteger("1");
        for(int i = 2; i <= n; i++) {
            big = big.multiply(BigInteger.valueOf(i));
        }

        String bigStr = big.toString();
        sb.append(bigStr);
        sb.reverse(); // 3628800 -> 0088263

        int zeroCount = 0;
        for (int i = 0; i < sb.length(); i++) {
            char ct = sb.charAt(i);
            if (ct == '0') {
                zeroCount++;
            } else {
                break;
            }
        }

        if (n == 0) {
            System.out.println("0");
        } else {
            System.out.println(zeroCount);
        }
    }
}
