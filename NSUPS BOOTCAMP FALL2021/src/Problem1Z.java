import java.util.Scanner;

public class Problem1Z {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		Scanner numberScan=new Scanner(System.in);
		int numberofStrings=input.nextInt();
		int[][] angles=new int[numberofStrings][3];
		int sum;
		
		for(int i=0; i<numberofStrings; i++ ) {
			for(int j=0;j<3;j++) {
				angles[i][j]=input.nextInt();
			}
		      
		}
		for(int i=0;i<numberofStrings;i++) {
			sum=0;
			for(int j=0;j<3;j++) {
				sum+=angles[i][j];
			}
			if(sum==180) {
				System.out.println("YES");
			}
			else {
				System.out.println("No");
			}
		}

	}

}
