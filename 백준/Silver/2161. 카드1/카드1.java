
import java.io.*;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        Queue<Integer> queue = new LinkedList<>();
        for(int i=1;i<=N;i++){
            queue.offer(i);
        }
        int i=1;
        int cur = 0;
        while(!queue.isEmpty()){
            if(i%2 == 1){
                cur = queue.poll();
                bw.write(cur+" ");
            }
            else{
                int down = queue.poll();
                queue.offer(down);
            }
            i++;
        }
        bw.flush();
        bw.close();
        br.close();
    }
}