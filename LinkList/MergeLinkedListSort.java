
import java.util.*;
class MergeInLinkedListSort
{
	public static void main (String[] args)
	{

		LinkedList<Integer> ll = new LinkedList<>();
		Scanner sc = new Scanner(System.in);
		int num,n;
		num = sc.nextInt();
		for(int i = 0; i < num; i++)  {
		    n = sc.nextInt();
		    ll.add(n);
		}
		LinkedList<Integer> l2 = new LinkedList<>();
		int num2;
		num2 = sc.nextInt();
		for(int i = 0; i < num2; i++)  {
		    n = sc.nextInt();
		    l2.add(n);
		}
		ll.addAll(l2);
		Collections.sort(ll);
		System.out.println(ll);
	}
}