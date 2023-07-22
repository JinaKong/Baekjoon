import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int T = 0;                          // 입력의 개수
        String input[] = new String[10];    // 입력 문자열
        

        // 입력
        T = Integer.parseInt(br.readLine());
        for (int i = 0; i < T; i++) {
            input[i] = br.readLine();                  // 문자열 읽기
        }

        // 출력
        for(int i=0; i<T; i++){
            StringBuilder sb = new StringBuilder();

            sb.append(input[i].charAt( 0 ));         // 첫 글자
            sb.append(input[i].charAt( input[i].length()-1));    // 마지막 글자

            System.out.println(sb);
        }

        br.close();
    }
}