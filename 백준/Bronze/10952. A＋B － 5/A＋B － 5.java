import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {

        int A, B = 0;

        while(true){
            String input[] = br.readLine().split(" ");
            A = Integer.parseInt(input[0]);
            B = Integer.parseInt(input[1]);

            if(A==0 && B==0)    // 0 두개가 입력되면 끝남
                break;
            System.out.println(A+B);
        }

        br.close();
    }
}