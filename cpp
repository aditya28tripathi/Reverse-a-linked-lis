class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
         struct Node* prev = nullptr;
    struct Node* current = head;
    struct Node* next = nullptr;

    // Traverse the list and reverse the pointers
    while (current != nullptr) {
        next = current->next;    // Store the next node
        current->next = prev;    // Reverse the current node's pointer
        prev = current;          // Move prev to the current node
        current = next;          // Move current to the next node
    }

    // Update the head to point to the new first node
    head = prev;
    return head;
}
    
    
};
