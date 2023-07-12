import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int buddhistYear = Integer.parseInt(br.readLine()); //int형으로 변환
        int adYear = buddhistYear - 543;

        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(adYear+"\n");  //줄바꿈 추가
        bw.flush();
        bw.close();
    }
}