import java.io.*;

public class Main {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        int x,y = 0;
        x = Integer.parseInt(br.readLine());
        y = Integer.parseInt(br.readLine());
        br.close();

        if(x>0){
            if(y>0) bw.write("1");
            else bw.write("4");
        }
        else if(x<0){
            if(y>0) bw.write("2");
            else bw.write("3");
        }

        bw.flush();
        bw.close();
    }
}