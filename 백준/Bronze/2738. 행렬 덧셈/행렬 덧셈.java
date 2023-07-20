import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    // 행렬의 값을 읽는 함수
    public static int[][] readMatrix(int N, int M) throws IOException {
        
        int result[][] = new int[100][100];

        for(int i=0; i < N; i++){
            String input[] = br.readLine().split(" ");
            for(int j=0; j < M; j++){
                result[i][j] = Integer.parseInt(input[j]);
            }
        }

        return result;
    }

    public static void main(String[] args) throws IOException {

        int N = 0, M = 0;  // 행렬 A,B 의 크기는 N*M
        int A[][];          // 행렬 A
        int B[][];          // 행렬 B

        // 행렬의 크기 N, M 읽기
        String input[] = br.readLine().split(" ");
        N = Integer.parseInt(input[0]);
        M = Integer.parseInt(input[1]);

        // 행렬 A, B 읽기
        A = readMatrix(N, M);
        B = readMatrix(N, M);

        // 두 행렬의 합 출력
        for(int i=0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                System.out.print( A[i][j]+B[i][j] + " ");   // A, B 행렬의 합
            }
            System.out.println();
        }
        br.close();
    }
}