import java.util.*;
public class F_Petr_and_Book {

	public static void main(String[] args) {
		
		Scanner in= new Scanner(System.in); 
		int n = in.nextInt();
		int Monday = in.nextInt();
		int Tuesday = in.nextInt();
		int Wednesday = in.nextInt();
		int Thursday = in.nextInt();
		int Friday = in.nextInt();
		int Saturday = in.nextInt();
		int Sunday = in.nextInt();
		
		while(n>0) {
			if(n-Monday<0 || n-Monday==0) {
				System.out.println("1");
				break;
			}else {
				n = n-Monday;
			}
			if(n-Tuesday<0 || n-Tuesday==0) {
				System.out.println("2");
				break;
			}else {
				n = n-Tuesday;
			}
			if(n-Wednesday<0 || n-Wednesday==0) {
				System.out.println("3");
				break;
			}else {
				n = n-Wednesday;
			}
			if(n-Thursday<0 || n-Thursday==0) {
				System.out.println("4");
				break;
			}else {
				n = n-Thursday;
			}
			if(n-Friday<0 || n-Friday==0) {
				System.out.println("5");
				break;
			}else {
				n = n-Friday;
			}
			if(n-Saturday<0 || n-Saturday==0) {
				System.out.println("6");
				break;
			}else {
				n = n-Saturday;
			}
			if(n-Sunday<0 || n-Sunday==0) {
				System.out.println("7");
				break;
			}else {
				n = n-Sunday;
			}
		}
		
	}

}