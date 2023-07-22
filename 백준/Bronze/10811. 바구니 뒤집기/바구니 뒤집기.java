import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력받기
        String input[] = br.readLine().split(" ");
        int N = Integer.parseInt(input[0]);  // N개의 바구니
        int M = Integer.parseInt(input[1]);  // M번동안 바구니 순서 바꾸기

        // 바구니에 각 번호 저장
        int bucket[] = new int[101];    // 100까지 입력되나, 인덱스 1부터 시작하니 101로 해야 함
        for(int i=1; i<=N; i++){
            bucket[i] = i;
        }

        // i번째부터 j번째 바구니까지 역순으로 바꾸기
        int i, j, temp = 0;

        for(int m=0; m<M; m++){
            // i, j 입력받기
            input = br.readLine().split(" ");
            i = Integer.parseInt(input[0]);
            j = Integer.parseInt(input[1]);

            // 역순으로 바꾸기
            for(int n=i; n<j; n++){
               temp = bucket[i];
               bucket[i++] = bucket[j];
               bucket[j--] = temp;
            }
        }

        //출력
        StringBuilder sb = new StringBuilder();
        for(i=1; i<=N; i++){
            sb.append(bucket[i]).append(" ");
        }

        br.close();
        System.out.println(sb);
    }
}