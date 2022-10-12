import java.util.*;
public class EUREKA {
    public static void main(String[] args) {
        try {

            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while (t-- > 0) {
                int n = sc.nextInt();
                double x = Math.pow((0.143 * n), n);
                if (x - Math.floor(x) < 0.5) {
                    System.out.println((int) Math.floor(x));
                } else
                    System.out.println((int) Math.floor(x) + 1);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
