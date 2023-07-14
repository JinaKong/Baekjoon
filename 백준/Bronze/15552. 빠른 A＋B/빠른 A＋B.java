import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int N = 0;  // 테스트케이스의 개수
        String input[];
        int sum = 0;

        /*
        입력
         */
        N = Integer.parseInt(br.readLine());
        for(int i=0; i<N; i++){
            input = br.readLine().split(" ");
            sum = Integer.parseInt(input[0]) + Integer.parseInt(input[1]);
            bw.write(sum +"\n");
        }
        br.close();

        bw.flush();
        bw.close();
    }
}