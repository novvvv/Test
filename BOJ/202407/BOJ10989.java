import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class BOJ10989 {
    public static void main(String[] args) throws IOException {
        // Scanner input = new Scanner(System.in);
        // BufferReader는 Enter만을 경계로 인식한다. 또한 String으로 값이 고정된다.
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        // String inputData = br.readLine(); // 문자열 데이터 입력
        int n = Integer.parseInt(br.readLine()); // 문자열 데이터를 입력받아 Integer로 형변환
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(arr);
        for (int i = 0; i < n; i++) {
            sb.append(arr[i]).append('\n');
        }
        System.out.println(sb);
    }
}

// n max 크기 : 10000000
// Collections.sort -> 메모리 제한 (객체 타입) 사용 불가능
