import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    //static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int N = 0;
        N = Integer.parseInt(br.readLine());

        for(int i=0; i<N; i++){
            StringBuilder sb = new StringBuilder();

            for(int j=0; j<i+1; j++){
                sb.append("*");     // 문자열에 i만큼 별 찍기
            }
            System.out.println(sb); // N번 출력
        }
        br.close();
    }
}