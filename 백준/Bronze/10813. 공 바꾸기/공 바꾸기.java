import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int N, M = 0;
        int i, j = 0;

        // N, M 입력받기
        String nums[] = br.readLine().split(" ");
        N = Integer.parseInt(nums[0]);
        M = Integer.parseInt(nums[1]);

        // N개의 바구니 초기화
        int result[] = new int[N];
        for(int k=0; k<N; k++){
            result[k] = k+1;
        }

        // 공을 교환
        for(int m=0; m<M; m++){
            //입력받기
            String s[] = br.readLine().split(" ");
            i = Integer.parseInt(s[0])-1;
            j = Integer.parseInt(s[1])-1;

            //교환
            int temp = result[i];
            result[i] = result[j];
            result[j] = temp;
        }

        // 출력
        for(int m=0; m<N; m++){
            System.out.print(result[m]+" ");
        }
        br.close();
    }
}