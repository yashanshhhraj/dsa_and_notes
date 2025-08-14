// ! Merge k sorted lists solution
// ? Time Complexity : O(NM)
class Solution {
public:
    ListNode * mergeLinkedList(ListNode * head1, ListNode * head2) {
        ListNode * head = new ListNode(-1);
        ListNode * tail = head;

        while(head1 && head2) {
            if(head1 -> val <= head2 -> val) {
                tail -> next = head1;
                tail = tail -> next;
                head1 = head1 -> next;
            }

            else {
                tail -> next = head2;
                tail = tail -> next;
                head2 = head2 -> next;
            }
        }

        if(head1) tail -> next = head1;
        if(head2) tail -> next = head2;

        ListNode * temp = head;
        head = head -> next;
        delete temp;

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size()) return nullptr;

        ListNode * head = lists[0];

        for(int i = 1; i < lists.size(); i++)
        head = mergeLinkedList(head, lists[i]);

        return head;
    }
};

// ? Using Merge Sort Algo
class Solution {
public:
    ListNode * mergeLinkedList(ListNode * head1, ListNode * head2) {
        ListNode * head = new ListNode(-1);
        ListNode * tail = head;

        while(head1 && head2) {
            if(head1 -> val <= head2 -> val) {
                tail -> next = head1;
                tail = tail -> next;
                head1 = head1 -> next;
            }

            else {
                tail -> next = head2;
                tail = tail -> next;
                head2 = head2 -> next;
            }
        }

        if(head1) tail -> next = head1;
        if(head2) tail -> next = head2;

        ListNode * temp = head;
        head = head -> next;
        delete temp;

        return head;
    }

    void mergeSort(vector<ListNode*>& arr, int start, int end) {
        if(start >= end) return; // <-- Base Case

        // Calculating Mid
        int mid = start + (end - mid) / 2;

        // Left Of Array
        mergeSort(arr, start, mid);

        // Right Of Array
        mergeSort(arr, mid + 1, end);

        // Merging the Linked List
        arr[start] = mergeLinkedList(arr[start], arr[mid + 1]);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size()) return nullptr;

        mergeSort(lists, 0, lists.size() - 1);

        return lists[0];
    }
};