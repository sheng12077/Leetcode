class Listnode:
    def _init_(self,val,next):
        self.val=val
        self.next=next


class Solution:
    def oddEvenList(self,head):
        if head==None:
            return None
        odd=head
        even=evenhead=head.next
        
        while odd.next and even.next:
            odd.next=even.next
            odd=odd.next
            even.next=odd.next
            even=even.next
        odd.next=evenhead
        
        return head
