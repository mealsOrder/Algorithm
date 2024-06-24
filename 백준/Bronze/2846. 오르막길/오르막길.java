import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int ans=0;
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine()," ");;
        for(int i=0;i<N;i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }
        int s = arr[0];
        int e = arr[0];
        for(int i=1;i<N;i++){
            if(arr[i-1]<arr[i]){
                e = arr[i];
            }else{
                ans = Math.max(e-s,ans);
                s = arr[i];
                e = arr[i];
            }
        }
        ans = Math.max(e-s,ans);
        bw.write(String.valueOf(ans));
        bw.flush();
        bw.close();
        br.close();
    }
}
