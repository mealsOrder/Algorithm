import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int x1,x2,y1,y2,r1,r2;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int ans=0;
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st;
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine()," ");
            x1 = Integer.parseInt(st.nextToken());
            y1 = Integer.parseInt(st.nextToken());
            r1 = Integer.parseInt(st.nextToken());
            x2 = Integer.parseInt(st.nextToken());
            y2 = Integer.parseInt(st.nextToken());
            r2 = Integer.parseInt(st.nextToken());

            double d = Math.sqrt(Math.pow(x1-x2,2)+Math.pow(y1-y2,2));
            int subR = 0;
            if(r1>=r2) subR = r1-r2;
            else subR = r2-r1;

            if (d == 0 && r1==r2) bw.write("-1\n");
            else if(d<subR || d>r1+r2) bw.write("0\n");
            else if(d == subR || d == r1+r2) bw.write("1\n");
            else if(d<r1+r2 && d>subR) bw.write("2\n");
        }
        bw.flush();
        bw.close();
        br.close();
    }

}
