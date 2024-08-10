package agust;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class BOJ10546 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        Map<String, Integer> players = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String player = scanner.nextLine();
            if (!players.containsKey(player)) {
                players.put(player, 1);
            } else {
                players.put(player, players.get(player) + 1);
            }
        }

        for (int i = 0; i < n - 1; i++) {
            String player = scanner.nextLine();
            players.put(player, players.get(player) - 1);
        }

        for (Map.Entry<String, Integer> entry : players.entrySet()) {
            if (entry.getValue() != 0) {
                System.out.println(entry.getKey());
                break;
            }
        }
    }
}
