package agust;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class BOJ9375 {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testCase = Integer.parseInt(br.readLine());
        for (int i = 0; i < testCase; i++) {

            Map<String, Integer> clothMap = new HashMap<>();
            int res = 1;
            int n = Integer.parseInt(br.readLine());
            for (int j = 0; j < n; j++) {

                StringTokenizer st = new StringTokenizer(br.readLine());
                st.nextToken(); // hat headgear -> 앞의 의상 이름 (hat) 정보는 필요 없으니 버린다.
                String clothType = st.nextToken();
                clothMap.put(clothType, clothMap.getOrDefault(clothType, 0) + 1);

            }

            // 옷장에 존재하는 의상으로 만들 수 있는 모든 조합의 수
            for (String string : clothMap.keySet()) {
                res *= clothMap.get(string) + 1;
            }

            // 아무것도 입지 않은 조합을 제외
            System.out.println(res - 1);
        }
    }
}
