import java.util.*;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int balance = input.nextInt();
        balance = 1000 - balance;
        int coin = 0;

        coin = coin + balance / 500;
        balance = balance % 500;

        coin = coin + balance / 100;
        balance = balance % 100;

        coin = coin + balance / 50;
        balance = balance % 50;

        coin = coin + balance / 10;
        balance = balance % 10;

        coin = coin + balance / 5;
        balance = balance % 5;

        coin = coin + balance / 1;
        balance = balance % 1;

        System.out.println(coin);

    }

}


