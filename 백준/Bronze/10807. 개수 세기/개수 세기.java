import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int N = 0;          // 총 N개의 정수
        String input[];     // 입력되는 정수를 저장할 배열
        int v = 0;          // 찾으려는 정수 v
        int count = 0;

        N = Integer.parseInt(br.readLine());
        input = br.readLine().split(" ");   // 공백으로 구분해서 저장
        v = Integer.parseInt(br.readLine());

        for(int i=0; i<N; i++){
            if(Integer.parseInt(input[i]) == v) {
                count++;    // 정수 갯수 카운트
            }
        }
        System.out.println(count);

        br.close();
    }
}