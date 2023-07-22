import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력받기
        int N = Integer.parseInt(br.readLine());    // 입력 숫자의 개수
        char[] ch = br.readLine().toCharArray();

        // 숫자 N개의 합 계산
        int sum = 0;
        for(int i=0; i<N; i++){
            //sum += (int)ch[i] - 48 ;
            sum += Character.getNumericValue(ch[i]);    // char형 숫재를 int형 숫자로 변환
        }


        // 합 출력
        System.out.println( sum );
    }
}