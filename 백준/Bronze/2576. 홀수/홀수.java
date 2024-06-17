import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = 7;
        boolean flag = true;
        int sum = 0;
        int minValue = 101;
        while(T>0){
            int num = Integer.parseInt(br.readLine());
            if(num%2 == 1){
                sum += num;
                if(minValue > num) minValue = num;
                flag = false;
            }
            T--;
        }
        if(flag) System.out.println(-1);
        else{
            System.out.println(sum);
            System.out.println(minValue);
        }

    }
}