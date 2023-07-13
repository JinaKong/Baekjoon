import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int hour, minute = 0;
        int timeToMinutes = 0;

        String input = br.readLine();
        StringTokenizer st = new StringTokenizer(input);
        hour = Integer.parseInt(st.nextToken());
        minute = Integer.parseInt(st.nextToken());
        br.close();

        timeToMinutes = (hour*60 + minute) -45 ;    // 시간을 분단위로 바꾸어 45분 앞으로 당기기
        if(timeToMinutes < 0){                      // 분단위 변환값이 0 미만이면
            timeToMinutes = 24*60 + minute -45;     // 전날 11시로 변환
        }

        hour = timeToMinutes/60;
        minute = timeToMinutes%60;

        bw.write(hour + " " + minute);
        bw.flush();
        bw.close();
    }
}