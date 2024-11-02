import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        List<Integer> arr = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int input_data = Integer.parseInt(br.readLine());
            arr.add(input_data);
        }

        Collections.sort(arr);

        for (int i = 0; i < n; i++) {
            System.out.println(arr.get(i));
        }

    }

}
