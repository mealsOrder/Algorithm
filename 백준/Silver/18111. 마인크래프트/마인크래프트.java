import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int [][] map = new int[N][M];
        int mn = Integer.MAX_VALUE;
        int mx = -1;
        for(int i = 0;i<N;i++){
            st = new StringTokenizer(br.readLine()," ");
            for(int j=0;j<M;j++){
                map[i][j] = Integer.parseInt(st.nextToken());
                mx = Math.max(mx,map[i][j]);
                mn = Math.min(mn,map[i][j]);
            }
        }

        int minTime = Integer.MAX_VALUE;
        int highest=0;
        for(int i=mn;i<=mx;i++){
            int time = 0;
            int inven = B;

            for(int j=0;j<N;j++){
                for(int k=0;k<M;k++){
                    if(i > map[j][k]){
                        time += i-map[j][k];
                        inven -= i-map[j][k];
                    }
                    else if(i < map[j][k]){
                        time += (map[j][k]-i)*2;
                        inven += map[j][k]-i;
                    }
                }
            }
            if(inven<0)continue;
            if(minTime >= time){
                minTime = time;
                highest = Math.max(highest,i);
            }
        }

        bw.write(minTime+" "+highest);
        bw.flush();
        bw.close();
        br.close();
    }

}
