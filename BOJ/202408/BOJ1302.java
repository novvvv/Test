package agust;

import java.util.*;

public class BOJ1302 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();

        Map<String, Integer> books = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String title = scanner.nextLine();
            if (books.containsKey(title)) {
                books.put(title, books.get(title) + 1);
            } else {
                books.put(title, 1);
            }
        }

        List<String> maxTitleList = new LinkedList();

        // 가장 많이 팔린 책의 권 수를 계산
        int maxTitle = 0;
        for (Map.Entry<String, Integer> entry : books.entrySet()) {
            if (maxTitle <= entry.getValue()) {
                maxTitle = entry.getValue();
            }
        }

        for (Map.Entry<String, Integer> entry : books.entrySet()) {
            if (entry.getValue().equals(maxTitle)) {
                maxTitleList.add(entry.getKey());
            }
        }

        Collections.sort(maxTitleList);
        System.out.println(maxTitleList.get(0));
    }
}
