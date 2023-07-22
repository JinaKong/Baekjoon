import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력받기
        int N = Integer.parseInt(br.readLine());    // 입력 숫자의 개수
        char[] chars = br.readLine().toCharArray();

        // 숫자 N개의 합 계산
        int sum = 0;
        for(int i=0; i<N; i++){
            sum += (int)chars[i] - 48 ;
        }

        
        // 합 출력
        System.out.println( sum );
    }
}