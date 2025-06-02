#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&&tqId=11004&rp=2&ru=/activity/oj&qru=/ta/cracking-the-coding-interview/question-ranking
//第11题(CM11)
//描述
//现有一链表的头指针ListNode*pHead,给一定值x,编写一段代码将所有小于x的结点排在其余结点之前,
//且不能改变原来的数据顺序,返回重新排列后的链表的头指针。
//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        struct ListNode* lesshead, * lesstail, * greaterhead, * greatertail;
//        lesshead = lesstail = (struct ListNode*)malloc(sizeof(struct ListNode));
//        greaterhead = greatertail = (struct ListNode*)malloc(sizeof(struct ListNode));
//        lesshead->next = lesstail->next = NULL;
//        struct ListNode* cur = pHead;
//        while (cur) {
//            if (cur->val < x)
//            {
//                lesstail->next = cur;
//                lesstail = lesstail->next;
//            }
//            else {
//                greatertail->next = cur;
//                greatertail = greatertail->next;
//            }
//            cur = cur->next;
//        }
//        lesstail->next = greaterhead->next;
//        pHead = lesshead->next;
//        greatertail->next = NULL;
//        free(lesshead);
//        free(greaterhead);
//        return pHead;
//    }
//};


