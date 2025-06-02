#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&&tqId=29370&rp=1&ru=/activity/oj&qru=/ta/2016test/question-ranking
//OR36 链表的回文结构
//描述
//对于一个链表,请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法,判断其是否为回文结构。
//给定一个链表的头指针A,请返回一个bool值,代表其是否为回文结构。
//保证链表长度小于等于900。
//测试样例:
//1->2->2->1
//返回:true
//方法1
//1、先找到中间节点
//2、将中间节点后面的数逆置
//3、前半段和后半段比较都可以
//struct ListNode {
//    int val;
//    struct ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//class PalindromeList {
//public:
//    struct ListNode* middleNode(struct ListNode* head) {
//        struct ListNode* fast = head;
//        struct ListNode* slow = head;
//        while (fast && fast->next) {
//            fast = fast->next->next;
//            slow = slow->next;
//        }
//        return slow;
//    }
//    struct ListNode* reverseList(struct ListNode* head) {
//        struct ListNode* n1 = NULL;
//        struct ListNode* n2 = head;
//        struct ListNode* tmp = head;
//        while (tmp != NULL) {
//            tmp = n2->next;
//            n2->next = n1;
//            n1 = n2;
//            n2 = tmp;
//        }
//        return n1;
//    }
//    bool chkPalindrome(ListNode* A) {
//        struct ListNode* mid = middleNode(A);
//        struct ListNode* rMid = reverseList(mid);
//        while (A && rMid) {
//            if (A->val != rMid->val) {
//                return false;
//            }
//            A = A->next;
//            rMid = rMid->next;
//        }
//        return true;
//    }
//};


