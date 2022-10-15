public class trapingrainwaterr {
    public static int trappedrainwater(int h[]){
        //left max boundary
        int leftmax[]=new int[h.length];
        leftmax[0]=h[0];
        for(int i=1;i<h.length;i++){
            leftmax[i]=Math.max(h[i],leftmax[i-1]);
        }
        //right max boundary
        int rightmax[]=new int[h.length];

        rightmax[h.length-1]=h[h.length-1];
        for(int i=h.length-2;i>=0;i--){
            rightmax[i]=Math.max(h[i],rightmax[i+1]);
        }
        int trapwater=0;
        //loop
        for(int i=0;i<h.length;i++){
            int waterlevel=Math.min(leftmax[i],rightmax[i]);
            trapwater+=waterlevel-h[i];
        }
        return trapwater;

    }
    public static void main(String[] args) {
        int h[]={4,2,0,6,3,2,5};
        System.out.println(trappedrainwater(h));


    }
}
