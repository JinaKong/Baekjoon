import java.io.*;

public class Main {
    
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    public static void main(String[] args) throws IOException {

        bw.write("\\    /\\" + "\n");     // '\'를 출력하려면 두번 쓰면 된다.('\\')
        bw.write(" )  ( ')" + "\n");
        bw.write("(  /  )" + "\n");
        bw.write(" \\(__)|" + "\n");

        bw.flush();
        bw.close();
    }
}