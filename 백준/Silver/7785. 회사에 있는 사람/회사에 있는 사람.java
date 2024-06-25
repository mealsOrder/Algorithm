import com.sun.source.tree.Tree;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st;
        String name,op;
        int N = Integer.parseInt(br.readLine());
        TreeSet<String> people = new TreeSet<>(Collections.reverseOrder());
        for(int i=0;i<N;i++){
            st = new StringTokenizer(br.readLine());
            name = st.nextToken();
            op = st.nextToken();
            if(op.equals("enter")){
                people.add(name);
            }
            else{
                people.remove(name);
            }
        }
        for(String s : people){
            bw.write(s+"\n");
        }

        bw.flush();
        bw.close();
        br.close();
    }

}
