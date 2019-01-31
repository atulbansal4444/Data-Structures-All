class gfg
{
   Node reverse(Node head)
   {
        Node curr = head;
        Node prev = null;
        Node temp;
        while(curr!=null)
        {
            temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
            
        }
        return prev;
   }
}