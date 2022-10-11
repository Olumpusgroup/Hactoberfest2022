import java.util.*;
class BINBASEBASIC {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- != 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            sc.nextLine();
            String s = sc.nextLine();
            int c = forpal(s);
            if(c<=k){
                if(s.length()%2==1){
                    System.out.println("YES");
                }
                else {
                    if((k-forpal(s))%2==0){
                        System.out.println("YES");
                    }
                    else{ System.out.println("NO");
                    }
                }
            }
            else {
                System.out.println("NO");
            }


        }
        sc.close();
    }
    static int forpal(String s){
        int left=0;
        int right=s.length()-1;
        int count=0;
        while (left<right){
            if(s.charAt(left)!=s.charAt(right)){count++;
            }
            left++;
            right--;
        }
        return count;
    }
}