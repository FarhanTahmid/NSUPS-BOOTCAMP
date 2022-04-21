import java.util.Scanner;

public class ProblemD {
	
	public static void main(String[] args) {
		
		int[] numbersOfElements=new int[8];
		int n=0,k=0,l=0,c=0,d=0,p=0,nl=0,np=0;
		Scanner input=new Scanner(System.in);
		String elements[]=input.nextLine().split(" ");
		for(int i=0;i<numbersOfElements.length;i++) {
			numbersOfElements[i]=Integer.parseInt(elements[i]);
		}
		numbersOfElements[0]=n;
		numbersOfElements[1]=k;
		numbersOfElements[2]=l;
		numbersOfElements[3]=c;
		numbersOfElements[4]=d;
		numbersOfElements[5]=p;
		numbersOfElements[6]=nl;
		numbersOfElements[7]=np;
		
		int findingMinimumElement[]= { (k*l)/n,(c*d),(p/1)};
		int min=0;
		for(int i=0;i<findingMinimumElement.length;i++) {
			min=findingMinimumElement[0];
			if(findingMinimumElement[i]<min) {
				min=findingMinimumElement[i];
			}
		}
		
		int numberOfToasts=(min/n);
		System.out.println(numberOfToasts);
	}
}
 