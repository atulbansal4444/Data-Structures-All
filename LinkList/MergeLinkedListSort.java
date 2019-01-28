
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
/*
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public ListNode mergeTwoLists(ListNode A, ListNode B) {
        ListNode dummyNode = new ListNode(0);
        ListNode tail = dummyNode;
        while(true)
        {
            if(A == null) 
            { 
                tail.next = B; 
                break; 
            } 
            if(B == null) 
            { 
                tail.next = A; 
                break; 
            }
            if(A.val>B.val)
            {
                tail.next = B;
                B = B.next;
                
            }
            else
            {
                tail.next = A;
                A = A.next;
            }
            tail = tail.next;
        }
        return dummyNode.next;
    }
}
