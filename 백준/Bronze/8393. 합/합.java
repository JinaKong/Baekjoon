import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int N = 0;  // N까지의 합 구하기
        int result = 0;

        N = Integer.parseInt(br.readLine());
        for(int i=1; i<=N; i++) {
            result +=i; // 1부터 N까지의 합
        }
        br.close();

        //StringBuilder 추가!!
        StringBuilder sb = new StringBuilder();
        sb.append(result);
        sb.append("\n");

        bw.write(sb.toString());    // 출력
        bw.flush();
        bw.close();
    }
}