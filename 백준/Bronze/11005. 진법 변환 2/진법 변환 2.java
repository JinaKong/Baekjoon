import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N;      // 10진법으로 된 수 (10억 이하)
        int B;      // B진법

        String str = br.readLine();
        N = Integer.parseInt(str.split(" ")[0]);
        B = Integer.parseInt(str.split(" ")[1]);


        /*
        N을 B진법으로 바꾸기
         */
        int num = 0;

        while(N > 0) {
            num = N % B;     // 10진법 수 N을 B로 나눈 나머지
            
            if(num >= 10)
                sb.append( (char)(num+'A'-10) );
            else
                sb.append( (char)(num+'0') );
            
            N /= B;
        }


        /*
        출력
         */
        System.out.println(sb.reverse());   // 역순으로 출력!
    }
}