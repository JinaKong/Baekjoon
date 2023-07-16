import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int N, M = 0;
        int i, j, k = 0;

        // N, M 입력받기
        String nums[] = br.readLine().split(" ");
        N = Integer.parseInt(nums[0]);
        M = Integer.parseInt(nums[1]);

        // 공을 넣는 방법을 M번 입력받아 저장
        int result[] = new int[N];
        for(int m=0; m<M; m++){
            String s[] = br.readLine().split(" ");
            i = Integer.parseInt(s[0])-1;
            j = Integer.parseInt(s[1])-1;
            k = Integer.parseInt(s[2]);

            for( int n=i; n<=j; n++){
                result[n] = k;
            }
        }

        // 출력
        for(int m=0; m<N; m++){
            System.out.print(result[m]+" ");
        }
        br.close();
    }
}