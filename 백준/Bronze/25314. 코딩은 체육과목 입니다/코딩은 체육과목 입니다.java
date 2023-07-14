import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    //static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int N = 0;  // 주어지는 N 바이트 (4의 배수)

        /*
        입력
         */
        N = Integer.parseInt(br.readLine());
        br.close();

        /*
        출력
         */
        int result = N/4;
        for(int i=0; i < result ; i++){
            System.out.print("long ");
        }
        System.out.println("int");
    }
}