
import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static boolean[]arr = {false,true,false,false};
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int ans=0;
        int N = Integer.parseInt(br.readLine());
        for(int i=1;i<=N;i++){
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());

            swap(a,b);
        }
        for(int i=1;i<=3;i++){
            if(arr[i])bw.write(String.valueOf(i));
        }
        bw.flush();
        bw.close();
        br.close();
    }

    private static void swap(int a, int b) {
        boolean temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

}