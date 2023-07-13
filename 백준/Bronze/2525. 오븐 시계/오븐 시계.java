import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int hour, minute = 0;   // 현재 시각, 분
        int cookingTime = 0;    // 요리하는 데 필요한 시간

        String input = br.readLine();
        StringTokenizer st = new StringTokenizer(input);
        hour = Integer.parseInt(st.nextToken());
        minute = Integer.parseInt(st.nextToken());

        cookingTime = Integer.parseInt(br.readLine());
        br.close();

        
        minute += cookingTime;
        while(minute >= 60){    // 소요시간이 60분 초과일수도 있으니 반복문 필요
            hour += 1;
            minute -= 60;
        }
        while(hour >= 24){
            hour -= 24;
        }

        bw.write(hour + " " + minute);
        bw.flush();
        bw.close();
    }
}