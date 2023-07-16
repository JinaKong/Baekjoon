import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int max = 0;        // 최댓값
        int maxNum = 0;     // 최댓값이 몇번째 수인지
        int input[] = new int[9];

        // 입력받기
        for(int i=0; i<9; i++){
            input[i] = Integer.parseInt(br.readLine());
        }

        // 최댓값 찾기
        max = input[0];             // 최댓값을 첫번째 값으로 초기화
        maxNum = 1;                 // 최댓값의 위치를 1로 초기화
        for(int i=1; i<9; i++){
            if(input[i] > max) {
                max = input[i];   // 최댓값
                maxNum = i+1;
            }
        }

        // 출력
        System.out.println(max);
        System.out.println(maxNum);

        br.close();
    }
}