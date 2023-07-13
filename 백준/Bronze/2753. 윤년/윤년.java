import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int year = 0;
        year = Integer.parseInt(br.readLine());
        br.close();

        if(year%4==0 & year%100!=0)
            bw.write("1");
        else if (year%400 ==0)
            bw.write("1");
        else
            bw.write("0");

        bw.flush();
        bw.close();
    }
}