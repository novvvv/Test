import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

public class Main {
    public static void main(String[] args) throws IOException {
        Set<Integer> set = new HashSet<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int m = Integer.parseInt(br.readLine());
        for (int i = 0; i < m; i++) {

            String[] commands = br.readLine().split(" ");
            String command = commands[0];

            if (command.equals("add")) {
                Integer value = Integer.parseInt(commands[1]);
                set.add(value);
            }

            else if (command.equals("check")) {
                Integer value = Integer.parseInt(commands[1]);
                if (set.contains(value)) sb.append("1" + '\n');
                else sb.append("0" + '\n');
            }

            else if (command.equals("remove")) {
                Integer value = Integer.parseInt(commands[1]);
                if (set.contains(value)) {
                    set.remove(value);
                }
            }

            else if (command.equals("toggle")) {
                Integer value = Integer.parseInt(commands[1]);
                if (set.contains(value)) {
                    set.remove(value);
                }
                else {
                    set.add(value);
                }
            }

            else if (command.equals("all")) {
                set.clear();
                for (int j = 1; j <= 20; j++) {
                    set.add(j);
                }
            }

            else if (command.equals("empty")) {
                set.clear();
            }
        }

        System.out.println(sb.toString());

        br.close();
    }
}
