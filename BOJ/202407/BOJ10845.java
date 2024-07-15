package july;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.List;
import java.util.StringTokenizer;

public class BOJ10845 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        LinkedList<Integer> queue = new LinkedList<>();
        for (int i = 0; i < n; i++) {

            String commands = br.readLine();
            String[] commandArr = commands.split(" ");
            String command = commandArr[0];

            switch (command) {
                case "push" :
                    int x = Integer.parseInt(commandArr[1]);
                    push(queue, x);
                    break;
                case "front" :
                    front(queue);
                    break;
                case "back" :
                    back(queue);
                    break;
                case "size" :
                    size(queue);
                    break;
                case "empty" :
                    empty(queue);
                    break;
                case "pop" :
                    pop(queue);
                    break;
            }
        }
    }

    public static void push (LinkedList<Integer> queue, int x) {
        queue.add(x);
    }

    public static void front (LinkedList<Integer> queue) {
        if (!queue.isEmpty()) {
            System.out.println(queue.getFirst());
        } else {
            System.out.println(-1);
        }
    }

    public static void back (LinkedList<Integer> queue) {
        if (!queue.isEmpty()) {
            System.out.println(queue.getLast());
        } else {
            System.out.println(-1);
        }
    }

    public static void size (LinkedList<Integer> queue) {
        System.out.println(queue.size());
    }

    public static void empty (LinkedList<Integer> queue) {
        if (queue.isEmpty()) {
            System.out.println("1");
        } else {
            System.out.println("0");
        }
    }

    public static void pop (LinkedList<Integer> queue) {
        if (!queue.isEmpty()) {
            int front = queue.removeFirst();
            System.out.println(front);
        } else {
            System.out.println(-1);
        }
    }
}
