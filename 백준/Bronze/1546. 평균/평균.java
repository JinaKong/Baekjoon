import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력받기
        int N = Integer.parseInt(br.readLine());    // 과목 개수
        String scores[] = br.readLine().split(" "); // 각 과목 점수
        float sum =0, average = 0;    // 새로운 합과 평균


        // 최대 점수 찾기
        int max = Integer.parseInt(scores[0]);
        for(int i=1; i<N; i++){
            if(Integer.parseInt(scores[i]) > max)
                max = Integer.parseInt(scores[i]);
        }
        
        // 새로운 합과 평균 계산
        StringBuilder sb = new StringBuilder();
        for(int i=0; i < N; i++){
            sum += (float)Integer.parseInt(scores[i]) / max * 100;
        }
        average = sum / N;
        

        // 출력
        br.close();
        System.out.println(average);
    }
}