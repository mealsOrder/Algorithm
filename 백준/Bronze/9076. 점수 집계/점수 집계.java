
import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int T = Integer.parseInt(br.readLine());
        while(T-->0){
            StringTokenizer st = new StringTokenizer(br.readLine()," ");
            int[] arr = new int[5];
            for(int i=0;i<5;i++){
                arr[i] = Integer.parseInt(st.nextToken());
            }
            Arrays.sort(arr);
            if(arr[3] - arr[1] >= 4) bw.write("KIN\n");
            else{
                bw.write(arr[1]+arr[2]+arr[3] + "\n");
            }
        }
        bw.flush();
        bw.close();
        br.close();
    }
}