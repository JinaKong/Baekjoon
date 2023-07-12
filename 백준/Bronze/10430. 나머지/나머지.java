import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine(); //int형으로 변환

        StringTokenizer st = new StringTokenizer(input);

        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write((a+b)%c +"\n");
        bw.write(((a%c) + (b%c))%c +"\n");
        bw.write((a*b)%c +"\n");
        bw.write(((a%c) * (b%c))%c +"\n");

        bw.flush();
        bw.close();
    }
}