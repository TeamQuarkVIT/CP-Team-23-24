class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int, int>> result;
        if (head == NULL || head->next == NULL)
        return result;

        Node* temp = head;
        Node* tail = head;
        while (tail->next != NULL) 
        tail = tail->next;
    
        while (temp != tail && temp->prev!=tail && tail->next!=temp) {
            int sum = temp->data + tail->data;
            if (sum == target) {
                pair<int, int> p = make_pair(temp->data, tail->data);
                result.push_back(p);
                temp = temp->next;
                tail = tail->prev;
            }
            else if (sum < target) 
            temp = temp->next;
            else
            tail = tail->prev;
        }

    return result;
    }
};