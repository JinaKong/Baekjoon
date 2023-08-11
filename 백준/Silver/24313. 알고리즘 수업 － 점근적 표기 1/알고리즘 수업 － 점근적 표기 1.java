import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
        int a1, a0;
        int c;
        int n0;

        /*
        입력
         */
        String input = br.readLine();
        a1 = Integer.parseInt(input.split(" ")[0]);
        a0 = Integer.parseInt(input.split(" ")[1]);

        c = Integer.parseInt(br.readLine());
        n0 = Integer.parseInt(br.readLine());

        /*
        출력
         */
        int fn, gn;
        for( int i = n0; i <= n0*n0; i++) {
            fn = a1 * i + a0;
            gn = c * i;

            if (fn > gn || a1 > c) {
                System.out.println("0");
                return;
            }
        }
        System.out.println("1");
    }
}