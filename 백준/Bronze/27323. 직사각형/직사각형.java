import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int width = 0;
        int height = 0;

        width = Integer.parseInt(br.readLine());
        height = Integer.parseInt(br.readLine());


        // 출력
        System.out.println(width * height);
    }
}