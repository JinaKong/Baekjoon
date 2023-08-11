import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader( new InputStreamReader(System.in));

        boolean Area[][] = new boolean [101][101];  // 도화지(기본 false)
        int N = Integer.parseInt(br.readLine());    // 색종이의 수
        int x, y;        // 색종이의 위치
        int area = 0;    // 색종이가 있는 면적

        String input;
        for(int i=0; i<N; i++) {

            // 색종이의 위치 입력받기
            input = br.readLine();
            x = Integer.parseInt(input.split(" ")[0]);
            y = Integer.parseInt(input.split(" ")[1]);

            // 해당 위치+10까지 true로 변경
            for(int j = x; j < x+10; j++) {
                for(int k= y; k < y+10; k++) {

                    if(Area[j][k] == false){
                        Area[j][k] = true;
                        area ++;
                    }

                }
            }
        }

        
        // 출력
        System.out.println(area);

    }
}
