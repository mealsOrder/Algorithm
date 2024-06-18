import java.io.*;
import java.util.*;

import static java.lang.System.exit;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        while(true){
            String str = br.readLine();
            if(str.equals("#")) break;
            str = str.toLowerCase();
            int ans = 0;
            for(int i=0;i<str.length();i++){
                char c = str.charAt(i);
                if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o'){
                    ans++;
                }
            }
            sb.append(ans);
            sb.append('\n');
        }
        bw.write(String.valueOf(sb));

        bw.flush();
        bw.close();
        br.close();
    }
}