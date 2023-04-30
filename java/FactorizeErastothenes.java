import java.util.Arrays;
public class FactorizeErastothenes {
    public static long[] factorize(long n,boolean[] sieve){
        long[] nums=new long[2];

        for(long i=2;i<sieve.length;i++){
            if(sieve[(int)i] && n%i==0){
                nums[0]=i;
                nums[1]=n/i;
                return nums;
            }
        }
        nums[0]=-1;
        nums[1]=-1;
        return nums;
    }

    public static boolean[] createSieve(long n){
        boolean sieve[]=new boolean[(int) n];
        Arrays.fill(sieve, true);

        for(int i=2;i<Math.sqrt(n);i++){
            if(sieve[i]){
                for(int j=2;;j++){
                    if(i*j >= n)break;
                    sieve[i*j]=false;
                }
            }
        }

        return sieve;
    }

    public static void main(String[] args) {
        long n=29996224275833l;
        long startTime=System.nanoTime();
        System.out.println(Arrays.toString(factorize(n,createSieve((long)Math.floor(Math.sqrt(n))))));
        System.out.println((System.nanoTime()-startTime)/Math.pow(10, 9)+"s");
    }
}
