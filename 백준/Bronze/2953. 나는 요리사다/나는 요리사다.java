import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int ans=0;
        int idx = 0;
        int[] arr = new int[5];
        for(int i=0;i<5;i++){
            st = new StringTokenizer(br.readLine()," ");
            for(int j=0;j<4;j++){
                int a = Integer.parseInt(st.nextToken());
                arr[i] += a;
            }
            if(ans < arr[i]){
                ans = arr[i];
                idx = i;
            }
        }
        bw.write(String.valueOf(idx+1)+" "+ans);
        bw.flush();
        bw.close();
        br.close();
    }
}
