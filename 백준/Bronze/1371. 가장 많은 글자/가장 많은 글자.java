import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str;
        int arr[] = new int[26];
        while((str = br.readLine()) != null){
            for(int i = 0; i < str.length(); i++){
                if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z'){
                    arr[str.charAt(i) - 'a']++;
                }
            }
        }

        int mx = 0;
        for(int i = 0; i < 26; i++){
            mx = Math.max(mx, arr[i]);
        }

        for(int i = 0; i < 26; i++){
            if(arr[i] == mx){
                System.out.print((char)('a' + i));
            }
        }
    }
}