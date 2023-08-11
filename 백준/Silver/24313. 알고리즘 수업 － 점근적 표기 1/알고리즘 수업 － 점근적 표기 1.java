import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));

        /*
        입력
         */
        String input = br.readLine();
        int a1 = Integer.parseInt(input.split(" ")[0]);
        int a0 = Integer.parseInt(input.split(" ")[1]);

        int c = Integer.parseInt(br.readLine());
        int n0 = Integer.parseInt(br.readLine());

        /*
        입력받은 값으로 f(n)과 g(n) 계산
         */
        int Fn = a1 * n0 + a0;
        int Gn = c * n0;

        /*
        출력
         */
        if (Fn > Gn || a1 > c)  // a0이 음수일 수 있으므로 'a1 > c' 도 비교!!
            System.out.println("0");
        else
            System.out.println("1");
    }
}