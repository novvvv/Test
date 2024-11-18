import java.lang.reflect.Array;
import java.util.*;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        ArrayList<Integer> coins = new ArrayList<>(n);

        int input_coin = 0;
        for (int i = 0; i < n ; i++) {
            input_coin = input.nextInt();
            coins.add(input_coin);
        }

        int coin = 0;
        Collections.sort(coins, Collections.reverseOrder());
        for (int i = 0; i < n; i++) {
            coin = coin + k / coins.get(i);
            k = k % coins.get(i);
        }

        System.out.println(coin);

    }

}


