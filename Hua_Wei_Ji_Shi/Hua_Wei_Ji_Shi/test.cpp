#define _CRT_SECURE_NO_WARNINGS 1 
//https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37&&tqId=21224&rp=5&ru=/activity/oj&qru=/ta/huawei/question-ranking
//HJ1 字符串最后一个单词的长度
//方法1
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string str;
//    getline(cin, str);
//    string::reverse_iterator s1 = str.rbegin();
//    int count = 0;
//    while (s1 != str.rend())
//    {
//        if (isalpha(*s1))
//        {
//            count++;
//        }
//        else
//        {
//            break;
//        }
//        s1++;
//    }
//    cout << count << endl;
//    return 0;
//}


//方法2
//#include <iostream>
//#include <string>
//using namespace std;
//int main() 
//{
//    string str;
//    getline(cin, str);
//    size_t pos = str.rfind(' ');
//    if (pos != string::npos)
//    {
//        cout << str.size() - (pos + 1) << endl;
//    }
//    else 
//    {
//        cout << str.size() << endl;
//    }
//    return 0;
//}


