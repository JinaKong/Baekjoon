import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int testNum = 0;  // 반복 개수
        int A,B = 0;        // 정수 A,B

        testNum = Integer.parseInt(br.readLine());
        for(int i=0; i<testNum; i++) {
            
            StringTokenizer st = new StringTokenizer(br.readLine());
            A = Integer.parseInt(st.nextToken());
            B = Integer.parseInt(st.nextToken());
            
            bw.write(A+B +"\n");    // 바로 출력
        }
        br.close();
        
        bw.flush();
        bw.close();
    }
}