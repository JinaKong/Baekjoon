import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        StringBuilder sb = new StringBuilder();
        int N = 0;          // 총 N개의 정수
        int max, min = 0;   // 최댓값, 최솟값

        // N 입력받기
        String input[] = br.readLine().split(" ");
        N= Integer.parseInt(input[0]);

        // N개의 정수들 입력받아, 최솟값과 최댓값 출력하기
        input = br.readLine().split(" ");   // 공백으로 구분해서 저장

        max = min = Integer.parseInt(input[0]);
        for(int i=0; i<N; i++){
            if(Integer.parseInt(input[i]) > max) {
                max = Integer.parseInt(input[i]);   // 최댓값
            }
            if(Integer.parseInt(input[i]) < min) {
                min = Integer.parseInt(input[i]);   // 최솟값
            }
        }

        // 출력
        sb.append(min).append(" ").append(max).append(" ");
        System.out.println(sb);

        br.close();
    }
}