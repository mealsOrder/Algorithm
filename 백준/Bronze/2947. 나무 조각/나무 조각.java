import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] arr = new int[5];

        for(int i=0;i<5;i++) arr[i] = Integer.parseInt(st.nextToken());

        for(int i=0;i<5;i++){
            for(int j=0;j<4;j++){
                boolean flag = false;
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = true;
                }
                if(flag){
                    for(int k=0;k<5;k++){
                        System.out.print(arr[k]+" ");
                    }
                    System.out.println();
                }
            }
        }
    }
}