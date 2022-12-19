//to print a pattern
class pattern {
    public static void main(String[] args) {
        int x;// border spaces
        int y;// between spaces
        int h=7;//height
        for (int i = 1; i <= h; i++) {
            x = h - i;
            y = 1 + (i - 2) * 2;
            printSpaces(x);// left spaces
            System.out.print(i);// printing number first time
            if (y > 0) {
                printSpaces(y);// between spaces
                System.out.print(i);// printing number second time
            }
            System.out.println();// to the next line
        }
    }

    // prints n number of spaces
    public static void printSpaces(int n) {
        while (n-- > 0) {
            System.out.print(" ");
        }
    }
}