/* 
**Sample Input:
// No of test cases
* 2
// Size of 1st linked list
1
//1st list elements
1
//get node value of 
0
// Size of 2nd linked list
3
//2nd list elements
3
2
1
//get node value of 
2
**Sample Output:
*1
*3
**Explanation:
In first case, there is one element in linked list with value 1. Hence, last element is 1.
In second case, there are 3 elements with values 3, 2 and 1 (3 -> 2 -> 1). Hence, element with position of 2 from tail is 3.
*/
class Solution {
static int getNode(Node head, int positionFromTail) {

        // List<Integer> l1 = new ArrayList<Integer>(); 
        // int c=0;
        // while(head!=null)
        // {
        //     l1.add(head.data);
        //     head = head.next;
        //     c++;
        // }
        // return l1.get(c-positionFromTail-1);
        Node temp,prev = null,curr = head;
        while(curr!=null)
        {
            temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        Node n = prev;
        if(positionFromTail == 0) return n.data;
        for(int i=1;i<=positionFromTail;i++)
        {
            prev = prev.next;
        }
        return prev.data;
    }
}