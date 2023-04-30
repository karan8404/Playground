import java.util.Arrays;

class Factorize {
    public static long[] factorize(long n) {
        long[] nums = new long[2];
        
        for (long i = 2; i < Math.sqrt(n); i++) {
            if (n % i == 0) {
                nums[0] = i;
                nums[1] = n / i;
                return nums;
            }
        }
        nums[0] = -1;
        nums[1] = -1;
        return nums;
    }

    public static void main(String[] args) {
        long n = 29996224275833l;
        long startTime = System.nanoTime();
        System.out.println(Arrays.toString(factorize(n)));
        System.out.println((System.nanoTime() - startTime) / Math.pow(10, 9) + "s");
    }
}