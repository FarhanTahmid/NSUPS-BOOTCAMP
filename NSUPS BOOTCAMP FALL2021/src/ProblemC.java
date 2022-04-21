import java.util.Scanner;

public class ProblemC {

	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		Scanner numberScan=new Scanner(System.in);
		int numberofStrings=input.nextInt();
		int[][] numbers=new int[numberofStrings][3];
		//int secondLargest=0;
		
		for(int i=0; i<numberofStrings; i++ ) {
			for(int j=0;j<3;j++) {
				numbers[i][j]=input.nextInt();
			}
		      
		}
		int temp=numbers[0][0];
		int secondLargest=numbers[0][0];
		for(int i=0;i<numberofStrings;i++) {
			for(int j=0;j<3;j++) {
				if(temp<numbers[i][j]) {
					temp=numbers[i][j];
				}
				if(secondLargest<temp && secondLargest>numbers[i][j]) {
					
					secondLargest=numbers[i][j];
				}
			}
			System.out.println(temp);
			System.out.println("Second largest");
			System.out.println(secondLargest);
		}
	}
}

