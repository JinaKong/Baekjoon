import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        char c;         // 입력 문자 (char)

        c = br.readLine().charAt(0);    // String으로 입력된 단일 문자를 char로 변경
        br.close();
        
        
        // (int)를 붙여 아스키코드 값으로 변환해서 출력
        System.out.println( (int)c );   
        

    }
}