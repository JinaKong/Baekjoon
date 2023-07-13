import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int testNum = 0;  // 반복 개수
        int A,B = 0;        // 정수 A,B

        //StringBuilder 추가!!
        StringBuilder sb = new StringBuilder();

        testNum = Integer.parseInt(br.readLine());
        for(int i=0; i<testNum; i++) {

            StringTokenizer st = new StringTokenizer(br.readLine());
            A = Integer.parseInt(st.nextToken());
            B = Integer.parseInt(st.nextToken());

            sb.append(A+B); // StringBuilder에 문자열 연결
            sb.append("\n");
        }
        br.close();

        bw.write(sb.toString());    // 출력
        bw.flush();
        bw.close();
    }
}