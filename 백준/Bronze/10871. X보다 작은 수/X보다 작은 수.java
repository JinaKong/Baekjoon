import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int N = 0;          // 총 N개의 정수
        int X = 0;
        String sequence[] = new String[0];     // 입력되는 정수를 저장할 배열
        String result[] = new String[0];       // 출력할 정수를 저장할 배열

        // N, X 입력받기
        String input[] = br.readLine().split(" ");
        N= Integer.parseInt(input[0]);
        X= Integer.parseInt(input[1]);

        // N개의 정수들 입력받아, X보다 작은 정수 출력하기
        sequence = br.readLine().split(" ");   // 공백으로 구분해서 저장

        StringBuilder sb = new StringBuilder();
        for(int i=0; i<N; i++){
            if(Integer.parseInt(sequence[i]) < X) {
                sb.append(sequence[i]).append(" ");
            }
        }
        System.out.println(sb);

        br.close();
    }
}