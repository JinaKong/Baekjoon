import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        String input = br.readLine();   // 입력 문자열
        int N = Integer.parseInt(br.readLine());    // N번째 글자

        // 입력 문자열의 N번째 글자 출력
        System.out.println( input.charAt(N-1) );
    }
}