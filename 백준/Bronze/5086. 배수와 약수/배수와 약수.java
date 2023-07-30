import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        while(true) {
            // 입력 받기
            String str = br.readLine();
            int A = Integer.parseInt(str.split(  " ")[0]);
            int B = Integer.parseInt(str.split(" ")[1]);

            // 0 0이 입력되면 입력 끝
            if(A==0 && B==0) break;
            
            if(B%A == 0)        // A가 B의 약수인 경우
                sb.append("factor\n");
            else if(A%B == 0 )  // A가 B의 배수인 경우
                sb.append("multiple\n");
            else                // A가 B의 약수도 배수도 아닌 경우
                sb.append("neither\n");
        }

        // 출력
        System.out.println(sb);
    }
}