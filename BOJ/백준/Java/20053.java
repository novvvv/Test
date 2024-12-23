import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int test_case = Integer.parseInt(br.readLine());

        for (int i = 0; i < test_case; i++) {

            ArrayList<Integer> arr = new ArrayList<>();

            int n = Integer.parseInt(br.readLine());
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                arr.add(Integer.parseInt(st.nextToken()));
            }

            Collections.sort(arr);
            bw.write(String.valueOf(arr.get(0)));
            bw.write(" ");
            bw.write(String.valueOf(arr.get(n-1)));
            bw.write("\n");

        }

        bw.flush();
        bw.close();
    }
}
