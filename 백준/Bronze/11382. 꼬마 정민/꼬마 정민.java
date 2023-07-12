import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        long A, B, C = 0;   // 10의 12승까지 가능하므로, int는 불가

        String input = br.readLine();
        br.close();
        StringTokenizer st = new StringTokenizer(input);
        A = Long.parseLong(st.nextToken());
        B = Long.parseLong(st.nextToken());
        C = Long.parseLong(st.nextToken());

        bw.write(A+B+C +"");
        bw.flush();
        bw.close();

    }
}