import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        String input;

        input = br.readLine();              // 문자열 읽기
        System.out.println(input.length()); // 문자열의 길이

        br.close();
    }
}