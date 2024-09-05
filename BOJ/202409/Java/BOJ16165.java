import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Map;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] numbers = br.readLine().split(" ");
        int n = Integer.parseInt(numbers[0]); // N : 총 입력 받을 걸그룹 수 (0 < N < 100)
        int m = Integer.parseInt(numbers[1]); // M : 맞혀야 할 문제의 수 (0 < M < 100)

        Map<String, String> girlGroupMap = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            String team = br.readLine();
            int teamNumber = Integer.parseInt(br.readLine());
            for (int j = 0; j < teamNumber; j++) {
                String member = br.readLine();
                girlGroupMap.put(member, team);
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < m; i++) {
            String member = br.readLine();
            int command = Integer.parseInt(br.readLine());
            // command 1 : 해당 멤버가 속한 팀의 이름 출력
            if (command == 1) {
                System.out.println(girlGroupMap.get(member));
            }
            // command 0 : 해당 팀의 멤버를 "사전순으로" 출력
            else if (command == 0) {
                for (Map.Entry<String, String> entry : girlGroupMap.entrySet()) {
                    if (entry.getValue().equals(member)) {
                        System.out.println(entry.getKey());
                    }
                }
            }
        }

        System.out.println(sb);
    }
}

/**
 * BOJ 16165
 * PS 2024 09 05
 * 걸그룹 마스터 준석이
 */
