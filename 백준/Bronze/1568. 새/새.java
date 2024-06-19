import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int time = 0;
        int i = 1;
        while(N>0){
            if(N < i){
                i = 1;
            }
            N = N - i;
            i++;
            time++;
        }
        System.out.println(time);
    }
}