Question Link- https://www.codingninjas.com/codestudio/problems/delete-node-in-a-linked-list_1105578?utm_source=youtube&utm_medium=affiliate&utm_campaign=faraz_videos

#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    if(node -> next == NULL)
        delete node;
    LinkedListNode<int> *temp2 = node -> next;
    swap(node -> data, node -> next -> data);
    
    
    node -> next = temp2 -> next;
    
    delete temp2;
    
  
}
