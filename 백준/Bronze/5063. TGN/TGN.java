import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        int ans=0;
        int N = Integer.parseInt(br.readLine());

        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine());
            int r = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());

            if( e-r > c){
                bw.write("advertise\n");
            } else if(e-r == c){
                bw.write("does not matter\n");
            }
            else{
                bw.write("do not advertise\n");
            }
        }
        bw.flush();
        bw.close();
        br.close();
    }

}
