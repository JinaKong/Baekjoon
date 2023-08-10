import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));
        Long n = Long.parseLong(br.readLine()); // int는 불가


        System.out.println( n*n*n); 
        System.out.println(3);    // O(n^3)의 시간복잡도이므로 최고차항은 3차

    }
}