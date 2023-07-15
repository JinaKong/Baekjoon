import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int N = 0;
        N = Integer.parseInt(br.readLine());

        for(int i=1; i <= N; i++){
            StringBuilder sb = new StringBuilder();
            for(int j=1; j <= (N-i) ; j++){
                sb.append(" ");	   // 문자열에 (N-i)만큼 공백 찍기
            }
            for(int j=1; j <= i ; j++){
                sb.append("*");     // 문자열에 i만큼 별 찍기
            }
            System.out.println(sb); // N번 출력
        }
        br.close();
    }
}