import java.io.*;
import java.util.StringTokenizer;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int A, B = 0;

        String input = br.readLine();
        StringTokenizer st = new StringTokenizer(input);
        A = Integer.parseInt(st.nextToken());
        B = Integer.parseInt(st.nextToken());


        if(A>B)
            bw.write(">");
        else if (A<B)
            bw.write("<");
        else
            bw.write("==");


        bw.flush();
        bw.close();
    }
}