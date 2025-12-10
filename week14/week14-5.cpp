/// week14-5.cpp
/// 昨天 CPE 第1題 UVA 10079
/// Pizza Cutting 切 Pizza
#include <iostream>
using namespace std;

int main()
{
    int N;
    while (cin >> N){
        if (N < 0) break;
        int ans = 1 + (1 + N) * N / 2;
        cout << ans << "\n"; /// 要有跳行
    } /// 請在小嘿，輸入 5 會跳出 16
}     ///           輸入 10 會跳出 56
      ///           輸入 -100 就直接結束 break
