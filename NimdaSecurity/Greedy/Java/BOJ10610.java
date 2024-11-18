import java.util.*;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String[] value = input.nextLine().split("");

        ArrayList<Integer> mirco_number = new ArrayList<>();
        for (int i = 0; i < value.length; i++) {
            mirco_number.add(Integer.parseInt(value[i]));
        }

        Collections.sort(mirco_number, Collections.reverseOrder());
        int sum_of_mirco = 0;
        for (int i = 0; i < mirco_number.size(); i++) {
            sum_of_mirco += mirco_number.get(i);
        }

        boolean check_3 = false; // 모든 수의 합이 3의 배수인가? : 3의 배수
        boolean check_0 = false; // 마지막이 0으로 끝나는가? : 10의 배수

        if (sum_of_mirco % 3 == 0) check_3 = true;
        if (mirco_number.get(mirco_number.size() - 1) == 0) check_0 = true;

        if (check_3 && check_0) {
            for (Integer integer : mirco_number) {
                System.out.print(integer);
            }
        }

        else {
            System.out.println(-1);
        }


    }

}
