import java.io.*;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    static int [] arr, move;
    static int ans;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine()," ");

        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        move = new int[101];
        for(int i=0;i<N+M;i++){
            st = new StringTokenizer(br.readLine()," ");
            move[Integer.parseInt(st.nextToken())] = Integer.parseInt(st.nextToken());
        }
        ans = Integer.MAX_VALUE;
        arr = new int[101];
        BFS();
        bw.write(String.valueOf(ans));
        bw.flush();
        bw.close();
        br.close();
    }
    public static void BFS(){
        Queue<int[]> queue = new LinkedList<>();
        arr[1] = 0;
        queue.offer(new int[] {1, 0});

        while(!queue.isEmpty()){
            int[] cur = queue.poll();

            int num = cur[0];
            int dice = cur[1];

            if(num == 100){
                ans = dice;
                return;
            }

            for(int k=1;k<=6;k++){
                int nx = num+k;

                if(nx > 100)continue;
                if(nx < 1)continue;
                if(arr[nx] >0)continue;

                if(move[nx] != 0){
                    arr[move[nx]] = dice+1;
                    queue.offer(new int[] {move[nx],dice+1});
                } else{
                    arr[nx] = dice+1;
                    queue.offer(new int[] {nx,dice+1});
                }
            }
        }
    }

}
