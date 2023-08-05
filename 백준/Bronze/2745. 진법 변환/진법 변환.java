import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String N;   //B진법으로 된 수
        int B;

        String str = br.readLine();
        N = str.split(" ")[0];
        B = Integer.parseInt(str.split(" ")[1]);


        /*
        N을 10진법으로 바꾸기
         */
        int length = N.length();
        int subResult, result = 0;

        for(int i = 0; i < length; i++) {
            // B진법의 수 N의 각 자리를 10진법으로 변환
            subResult = N.charAt(i) - '0';
            if (subResult >= 17) {  // 두자리 수인 경우
                subResult = N.charAt(i) - 'A' + 10;
            }

            // B의 i제곱 곱하기
            result += subResult * (int)Math.pow(B, length-i-1);
        }

        /*
        출력
         */
        System.out.println(result);
    }
}