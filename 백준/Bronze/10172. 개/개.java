import java.io.*;

public class Main {
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        bw.write("|\\_/|" + "\n");
        bw.write("|q p|   /}" + "\n");
        bw.write("( 0 )\"\"\"\\" + "\n");
        bw.write("|\"^\"`    |" + "\n");
        bw.write("||_/=\\\\__|" + "\n");

        bw.flush();
        bw.close();
    }
}