// week02-4.cpp LeetCode�ǲ߭p�e��2�D
// 389. Find the Difference ���2�Ӧr��u�t���Ӧr���v
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {}; // �i�H�α�l�Ӹ˦r���A�j�A���A�N��u�@�}�l�Ū��v
        for (int i=0; i<s.length(); i++)
        {
            char c = s[i]; // ���X�r��
            A[c]++; // ��r���A��J��l��
        }
        for (int i=0; i<t.length(); i++) // �r�ꪺ for �j��
        {
            char c = t[i]; // ���X�r��
            A[c]--; // �q��l�̡A���X�r��
            if (A[c] < 0) return c; // �������B�ܭt���A�N�����ΡA�ʥ�
        }
        return 0; // ���|�Ψ�o�@���
    }
};
