import java.util.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;



public class Main {

    static class Pair{
        int first;
        int second;

        public Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        ArrayList<Pair> info = new ArrayList();

        for (int i = 0; i < n; i++) {
            int weight = input.nextInt();
            int height = input.nextInt();
            info.add(new Pair(weight, height));
        }

        int[] rank = new int[n];
        for (int i = 0; i < n; i++) {
            int rank_number = 1;
            Pair standard_person = info.get(i);

            for (int j = 0; j < n; j++) {
                Pair compare_person = info.get(j);
                if (standard_person.first < compare_person.first &&standard_person.second < compare_person.second) {
                    rank_number++;
                }
            }

            rank[i] = rank_number;
        }

        for (int i = 0; i < n; i++) {
            System.out.print(rank[i] + " ");
        }


    }

}


