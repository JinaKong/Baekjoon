import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());


        System.out.println(n);    // n번 반복된다.
        System.out.println(1);    // O(n)의 시간복잡도

    }
}