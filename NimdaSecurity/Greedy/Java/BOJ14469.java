import java.lang.reflect.Array;
import java.util.*;
import java.util.Scanner;

public class Main {

    static class Pair implements Comparable<Pair>{

        int first;
        int second;

        public Pair(int first, int second) {
            this.first = first;
            this.second = second;
        }

        // 첫 번째 value (first) 기준 오름차순
        @Override
        public int compareTo(Pair p) {
            return Integer.compare(this.first, p.first);
        }
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        ArrayList<Pair> cow_info = new ArrayList<>();
        int startTime, endTime;
        for (int i = 0; i < n; i++) {
            startTime = input.nextInt();
            endTime = input.nextInt();
            cow_info.add(new Pair(startTime, endTime));
        }

        Collections.sort(cow_info);
        int current_time = 0; // 현재 시간
        int progress_time = 0; // 진행 시간
        for (int i = 0; i < n; i++) {
            int waiting_time = 0; // 대기시간
            if (current_time < cow_info.get(i).first) {
                waiting_time = cow_info.get(i).first - current_time;
            }
            progress_time = cow_info.get(i).second;
            current_time += waiting_time + progress_time;
        }

        System.out.println(current_time);

        // 2 1 5 7 8 3

    }

}


