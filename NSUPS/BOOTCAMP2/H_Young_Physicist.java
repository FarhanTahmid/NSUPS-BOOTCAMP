import java.util.*;
public class H_Young_Physicist {

	public static void main(String[] args) {
		
		Scanner in= new Scanner(System.in); 
		int n = in.nextInt();
		int x;int y;int z;
		int sum1 = 0;
		int sum2 = 0;
		int sum3 = 0;
		//int arr[][] = new int[n][3];
		for(int i=0; i<n; i++) {
			x = in.nextInt();
			sum1 += x;
			y = in.nextInt();
			sum2 += y;
			z = in.nextInt();
			sum3 += z;
		}
		
		if(sum1 == 0 && sum2==0 && sum3==0) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
		
	}

}