import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] time = br.readLine().split(" ");

        String[] S = time[0].split(":"); // 개강총회 시작 시간
        String[] E = time[1].split(":"); // 개강총회 종료 시간
        String[] Q = time[2].split(":"); // 스트리밍 종료 시간

        // Logic
        // 채팅 로그 데이터 입력 HH:MM name
        String data = null;
        // Map<String, String> logMap = new HashMap<>();
        Set<String> before = new HashSet<>(); // 개강총회 입장 분석 체크 (... ~ S)
        Set<String> after = new HashSet<>(); // 개강총회 퇴장 분석 체크 (E ~ Q)
        while ((data = br.readLine()) != null && !data.isEmpty()) {

            String[] log = data.split(" ");

            if (log.length < 2) {
                continue;
            }

            String nickName = log[1];
            String[] timeLog = log[0].split(":");
            int hour = Integer.parseInt(timeLog[0]); // 로그 시작 시간(시)
            int minute = Integer.parseInt(timeLog[1]); // 로그 시작 시간(분)

            int SHour = Integer.parseInt(S[0]); // 개강총회 시작 시간(시)
            int SMinute = Integer.parseInt(S[1]); // 개강총회 시작 시간(분)
            int EHour = Integer.parseInt(E[0]); // 개강총회 종료 시간(시)
            int EMinute = Integer.parseInt(E[1]); // 개강총회 종료 시간(분)
            int QHour = Integer.parseInt(Q[0]); // 스트리밍 종료 시간(시)
            int QMinute = Integer.parseInt(Q[1]); // 스트리밍 종료 시간(분)

            // 입장 체크 00:00 ~ S(22:00)
            // hour <= S
            if (hour < SHour || (hour == SHour) && (minute <= SMinute)) {
                before.add(nickName);
            }

            // 퇴장 체크: 총회 종료 후 스트리밍 종료 전까지
            if (hour > EHour || (hour == EHour && minute >= EMinute)) {
                if (hour < QHour || (hour == QHour && minute <= QMinute)) {
                    after.add(nickName);
                }
            }
        }

        Set<String> intersection = new HashSet<>(before);
        intersection.retainAll(after);
        System.out.println(intersection.size());
    }
}
