import java.util.Scanner;
class MatrixTraversal {
    public static int l=4;
    public static int arr[][]=new int[l][l];
    public static void main(String[] args) {

        int x[]=new int[2],y[]=new int[2];//(i,j),(k,l)

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the elements of the array");
        for(int i=0;i<l;i++)
            for(int j=0;j<l;j++)
                arr[i][j]=sc.nextInt();

        System.out.println("Enter i and j");
        x[0]=sc.nextInt()-1;x[1]=sc.nextInt()-1;

        System.out.println("Enter k and l");
        y[0]=sc.nextInt()-1;y[1]=sc.nextInt()-1;
        sc.close();

        int aVisits[]=new int[Math.abs(rowIndex(x, l)-rowIndex(y, l))+1];
        int sumA=0;

        //printing for Mr. A.
        if(rowIndex(x, l)<rowIndex(y, l)){//if x comes first
            for(int i=rowIndex(x, l);i<=rowIndex(y, l);i++){
                aVisits[i-rowIndex(x, l)]=atRowIndex(i,l);
            }
        }
        else{//if y comes first
           for(int i=rowIndex(y, l);i<=rowIndex(x, l);i++){
                aVisits[i-rowIndex(y, l)]=atRowIndex(i,l);
            } 
        }
        System.out.println();

        int bVisits[]=new int[Math.abs(columnIndex(x, l)-columnIndex(y, l))+1];
        int sumB=0;
        //printing for Mr. B
        if(columnIndex(x, l)<columnIndex(y, l)){//if x comes first
            for(int i=columnIndex(x, l);i<=columnIndex(y, l);i++){
                bVisits[i-columnIndex(x, l)]=atColumnIndex(i,l);
            }
        }
        else{//if y comes first
           for(int i=columnIndex(y, l);i<=columnIndex(x, l);i++){
                bVisits[i-columnIndex(y, l)]=atColumnIndex(i,l);
            } 
        }
        System.out.println("Elements visited by Mr. A");
        for (int i : aVisits) {
            sumA+=i;
            System.out.print(i+", ");
        }
        System.out.println("\nElements visited by Mr. B");
        for(int i : bVisits){
            sumB+=i;
            System.out.print(i+", ");
        }

        int common[]=new int[(aVisits.length>bVisits.length?aVisits.length:bVisits.length)];
        int k=0;//number of elements in common
        System.out.println("\nCommon elements visited by both");
        for (int i : aVisits) {
            for (int j : bVisits) {
                if(i==j)common[k++]=i;
            }
        }
        for(int i=0;i<k;i++)
            System.out.print(common[i]+", ");

        System.out.println("\nSum of elements visited by A : "+ sumA);
        System.out.println("Sum of elements visited by B : "+ sumB);

    }

    public static int rowIndex(int[] z,int l){
        return z[0]*l+z[1];
    }

    public static int columnIndex(int[] z,int l){
        return z[1]*l+z[0];
    }

    public static int[] rowIndexInv(int z,int l){
        int arr[]={z/4,z%4};
        return arr;
    }

    public static int[] columnIndexInv(int z,int l){
        int arr[]={z%4,z/4};
        return arr;
    }

    public static int atRowIndex(int z,int l){
        int a[]=rowIndexInv(z,l);
        return arr[a[0]][a[1]];
    }

    public static int atColumnIndex(int z,int l){
        int a[]=columnIndexInv(z,l);
        return arr[a[0]][a[1]];
    }
}