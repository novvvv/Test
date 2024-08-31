package agust;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class BOJ9612 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        Map<String, Integer> words = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String word = br.readLine();
            words.put(word, words.getOrDefault(word, 0) + 1);
        }

        String maxKey = "";
        int maxValue = -1;
        for (String key : words.keySet()) {
            if (maxValue < words.get(key)) {
                maxKey = key;
                maxValue = words.get(key);
            }
        }

        System.out.println(maxKey + " " + maxValue);
    }
}
