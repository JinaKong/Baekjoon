import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        // 입력
        String input[] = br.readLine().split(" " );
        String A[] = input[0].split("");
        String B[] = input[1].split("");


        // A, B를 역수로 만들기
        int reversedA = Integer.parseInt(A[2])*100
                + Integer.parseInt(A[1])*10
                + Integer.parseInt(A[0]);

        int reversedB = Integer.parseInt(B[2])*100
                + Integer.parseInt(B[1])*10
                + Integer.parseInt(B[0]);

        
        // 출력
        StringBuilder sb = new StringBuilder();

        if(reversedA > reversedB )
            sb.append(reversedA);
        else
            sb.append(reversedB);
        System.out.println(sb);

    }

}