import java.util.*;
class RISK {
    static int[] dx ={-1,0,0,1};
    static int[] dy ={0,1,-1,0};
    static int dfs(int i, int j, int n, int m, String a[]){
        if(i<0||j<0||i>=n||j>=m||a[i].charAt(j)!='1')
            return 0;

        a[i]=a[i].substring(0,j)+'0'+a[i].substring(j+1);
        int ans=1;
        for(int k=0;k<4;k++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            ans+=dfs(nx,ny,n,m,a);
        }
        return ans;
    }
    static int ans(String a[], int n, int m){
        ArrayList ans=new ArrayList<>();
        for (int i=0;i<n;i++){
            for (int j = 0; j <m ; j++) {
                if (a[i].charAt(j)=='1'){
                    int c=dfs(i,j,n,m,a);
                    ans.add(c);
                }
            }

        }
        Collections.sort(ans);
        int g=0;
        for (int i = 1; i < ans.size(); i+=2) {
            g+= (int) ans.get(i);

        }
        return g;
    }
    public static void main(String[] args) {
        try {


            Scanner sc=new Scanner(System.in);
            int t= sc.nextInt();
            while (t-->0){
                int n=sc.nextInt();
                int m=sc.nextInt();
                String a[]=new String[n];
                sc.nextLine();
                for (int i=0;i<m;i++){
                    a[i]= sc.nextLine();

                }
                int ans=ans(a,m,n);
                System.out.println(ans);
            }
        } catch (Exception ex) {
            ex.printStackTrace();
        }


    }
}
