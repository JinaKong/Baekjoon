import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int N = 0;  // 구구단 N단

        N = Integer.parseInt(br.readLine());
        br.close();

        for(int i=1; i<=9; i++){
            bw.write(N+" * "+i+" = "+N*i+"\n");
        }
        bw.flush();
        bw.close();
    }
}