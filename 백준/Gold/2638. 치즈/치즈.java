import java.io.*;
import java.util.*;

public class Main {

    static int N,M,ans;
    static int[][]map;
    static int[] dx = {0,0,1,-1};
    static int[] dy = {1,-1,0,0};
    static boolean[][] vis;

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        map = new int[N][M];
        ans = 0;

        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine()," ");
            for(int j=0;j<M;j++){
                map[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        while(true){
            vis = new boolean[N][M];
            airCheck(0,0);
            for(int i=0;i<N;i++){
                for(int j=0;j<M;j++){
                    if(map[i][j] == 1){
                        meltCheck(i,j);
                    }
                }
            }
            int leftCheeze = 0;
            for(int i=0;i<N;i++){
                for(int j=0;j<M;j++){
                    if(map[i][j]==1){
                        leftCheeze++;
                    }
                    if(map[i][j]==2){
                        map[i][j]=0;
                    }
                }
            }
            ans++;
            if(leftCheeze == 0) break;
        }
        bw.write(ans+"\n");
        br.close();
        bw.flush();
        bw.close();
    }

    public static void meltCheck(int x,int y){
        int count = 0;
        int nx,ny;
        for(int i=0;i<4;i++){
            nx = x+dx[i];
            ny = y+dy[i];
            if(isValid(nx,ny) && map[nx][ny] == 3) count++;
        }
        if(count>=2) map[x][y] = 2;
    }

    public static void airCheck(int x,int y){
        vis[x][y] = true;
        map[x][y] = 3;

        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(!isValid(nx,ny))continue;
            if(vis[nx][ny] || map[nx][ny] == 1 || map[nx][ny] == 2)continue;

            airCheck(nx,ny);
        }
    }

    public static boolean isValid(int x,int y){
        return 0<=x && x<N && 0<= y && y<M;
    }

}