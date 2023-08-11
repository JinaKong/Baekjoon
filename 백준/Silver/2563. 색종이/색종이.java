import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));

        /*
        입력
         */
        int N = Integer.parseInt(br.readLine());    // 색종이의 수
        String input;
        int x[] = new int[N];
        int y[] = new int[N];

        /*
        입력
         */
        for(int i=0; i<N; i++) {
            input = br.readLine();
            x[i] = Integer.parseInt(input.split(" ")[0]);
            y[i] = Integer.parseInt(input.split(" ")[1]);
        }

        /*
        색종이가 있는 영역 계산
         */
        boolean Area[][] = new boolean [101][101];

        for(int i = 0; i < N; i++) {

            for(int j = x[i]; j < x[i]+10; j++) {
                for(int k= y[i]; k<y[i]+10; k++) {
                    Area[j][k] = true;
                    //System.out.println(j+", " +k  +" ");
                }
            }
        }

        /*
        출력
         */

        /*
        for(int i=0; i<100; i++){
            for (int j=0; j<100; j++) {
                if (Area[i][j] == true) {
                    //System.out.println(i+", " +j  +" ");
                    System.out.print("■");
                } else
                    System.out.print("□");
            }
            System.out.println();
        }

         */

        int count = 0;
        for(int i=0; i<=100; i++){
            for(int j=0; j<=100; j++){
                if(Area[i][j] == true)
                    count++;
            }
        }
        System.out.println(count);

    }
}