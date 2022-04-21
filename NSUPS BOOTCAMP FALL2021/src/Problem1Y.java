import java.util.Scanner;

public class Problem1Y {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		int numberofInputs=input.nextInt();
		String shipCheck[][]=new String[numberofInputs][1];
		
		for(int i=0;i<numberofInputs;i++) {
			for(int j=0;j<1;j++) {
				shipCheck[i][j]=input.next();
			}
		}
		for(int i=0;i<numberofInputs;i++) {
			for(int j=0;j<1;j++) {
				if(shipCheck[i][j].toLowerCase().equals("b")) {
					System.out.println("BattleShip");
				}
				else if(shipCheck[i][j].toLowerCase().equals("c")){
					System.out.println("Cruiser");
				}
				else if(shipCheck[i][j].toLowerCase().equals("d")) {
					System.out.println("Destroyer");
				}
				else if(shipCheck[i][j].toLowerCase().equals("f")) {
					System.out.println("Frigate");
				}
			}
		}
		System.out.println("Okau");
		 
	}

}
