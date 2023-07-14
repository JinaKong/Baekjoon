import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    //static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int N = 0;  // 테스트케이스의 개수
        int sum=0;

        StringBuilder sb = new StringBuilder();

        N = Integer.parseInt(br.readLine());
        for(int i=0; i<N; i++){
            String input[] = br.readLine().split(" ");
            sum = Integer.parseInt(input[0]) + Integer.parseInt(input[1]);

            sb.append("Case #").append(i+1).append(": ");
            sb.append(input[0]).append(" + ").append(input[1]).append(" = ");
            sb.append(sum).append("\n");
        }
        br.close();

        System.out.println(sb);
    }
}