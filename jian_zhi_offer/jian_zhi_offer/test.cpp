#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/practice/7a0da8fc483247ff8800059e12d7caf1?tpId=13&tqId=11200&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking
//描述
//求1+2+3+...+n,要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句(A?B:C)
//数据范围:
//0<n≤200
//0<n≤200
//进阶:
//空间复杂度O(1)
//时间复杂度O(n)
//方法1
//#include <iostream>
//using namespace std;
//class Sum
//{
//public:
//    Sum()
//    {
//        _ret += _i;
//        ++_i;
//    }
//    static int GetRet()
//    {
//        return _ret;
//    }
//private:
//    static int _i;
//    static int _ret;
//};
//int Sum::_i = 1;
//int Sum::_ret = 0;
//class Solution {
//public:
//    int Sum_Solution(int n) {
//        Sum a[n];
//        return Sum::GetRet();
//    }
//};
//int main()
//{
//    int num = 0;
//    cin >> num;
//    Solution s;
//    int ret = s.Sum_Solution(num);
//    cout << ret << endl;
//    return 0;
//}


//方法2
//内部类
//class Solution {
//    class Sum {
//    public:
//        Sum() {
//            _ret += _i;
//            ++_i;
//        }
//    };
//public:
//    int Sum_Solution(int n) {
//        Sum a[n];
//        return _ret;
//    }
//private:
//    static int _i;
//    static int _ret;
//};
//int Solution::_i = 1;
//int Solution::_ret = 0;

