import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        Set<Integer> setA = new HashSet<>();
        Set<Integer> setB = new HashSet<>();
        for (int i = 0; i < a; i++) {
            setA.add(scanner.nextInt());
        }
        for (int i = 0; i < b; i++) {
            setB.add(scanner.nextInt());
        }

        // A - B
        Set<Integer> newSetA = new HashSet<>();
        for (Integer integer : setA) {
            newSetA.add(integer);
        }
        for (Integer element : setB) {
            if (setA.contains(element)) {
                setA.remove(element);
            }
        }

        // B - A
        for (Integer element : newSetA) {
            if (setB.contains(element)) {
                setB.remove(element);
            }
        }

        // 대칭 차집합
        System.out.println(setA.size() + setB.size());
    }
}

/**
 * A = {1, 2, 4}
 * B = {2, 3, 4, 5, 6}
 */
