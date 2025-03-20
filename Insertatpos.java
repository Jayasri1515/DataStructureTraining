import java.util.Scanner;
public class Insertatpos{
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
		System.out.println("Enter position : ");
		int position=sc.nextInt();
		for(int i=size-1;i>=position-1;i--){
		    arr[i+1]=arr[i];
		}
		arr[position-1]=element;
		for(int i=0;i<=size;i++){
		    System.out.print(arr[i]+" ");
		}
	}
}
