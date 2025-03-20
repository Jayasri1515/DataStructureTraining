import java.util.Scanner;
public class Insertatbeg{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter size : ");
		int size=sc.nextInt();
		int[] arr=new int[10];
		System.out.println("Enter array elements : ");
		for(int i=0;i<size;i++){
		    arr[i]=sc.nextInt();
		}
		System.out.println("Enter element to be inserted : ");
		int element=sc.nextInt();
		for(int i=size-1;i>=0;i--){
		    arr[i+1]=arr[i];
		}
		arr[0]=element;
		for(int i=0;i<=size;i++){
		    System.out.print(arr[i]+" ");
		}
	}
}
