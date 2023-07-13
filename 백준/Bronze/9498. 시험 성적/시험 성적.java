import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int score = 0;
        score = Integer.parseInt(br.readLine());
        br.close();

        if(score >= 90)
            bw.write("A");
        else if (score >= 80)
            bw.write("B");
        else if (score >= 70)
            bw.write("C");
        else if (score >= 60)
            bw.write("D");
        else
            bw.write("F");


        bw.flush();
        bw.close();
    }
}