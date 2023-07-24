import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력
        String input[] = br.readLine().split(" " );
        String A[] = input[0].split("");
        String B[] = input[1].split("");


        // A,B 중 역수가 큰 수를 찾기
        char result = 'A';  // 우선 A의 역수가 크다고 놓고
        
        // B의 역수가 더 크다면 변경
        if (Integer.parseInt(A[2]) < Integer.parseInt(B[2])){
            result = 'B';
        }
        else if(Integer.parseInt(A[2]) == Integer.parseInt(B[2])
                && Integer.parseInt(A[1]) < Integer.parseInt(B[1])){
            result = 'B';
        }
        else if (Integer.parseInt(A[2]) == Integer.parseInt(B[2])
                && Integer.parseInt(A[1]) == Integer.parseInt(B[1])
                && Integer.parseInt(A[0]) < Integer.parseInt(B[0])){
            result = 'B';
        }

        
        // 출력
        StringBuilder sb = new StringBuilder();
        if(result == 'A'){
           sb.append(A[2]).append(A[1]).append(A[0]);
        }
        else
            sb.append(B[2]).append(B[1]).append(B[0]);

        System.out.println(sb);

    }

}