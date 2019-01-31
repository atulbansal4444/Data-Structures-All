static boolean hasCycle(Node head) {
        if(head==null || head.next==null) 
            return false;
        
    Node first = head;
    Node second = head;
    while(first!=null  && second!=null && second.next!=null)
    {
        first = first.next;
        second = second.next.next;
        if(first == second)
            return true;
    }
    return false;
    }