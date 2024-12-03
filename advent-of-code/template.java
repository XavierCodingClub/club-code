import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class template {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("filename.txt"));

        int ans = 0;
        String line;
        while ((line = br.readLine()) != null) {
            System.out.println(line);
        }
        br.close();
        System.out.println(ans);
    }
}
