/// week05-1.cpp
/// LeetCode �ǲ߭p�e Built-In Function 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// ��r�� string �� iostream �� cin �ӥ�
        string word; /// �l��
        ///ss >> word; // ���O cin >> word �@�ˡA�{�b�� ss �i�H�M ss >> word
        ///ss >> word;
        while (ss >> word){ /// �@��Ū�AŪ�줣��Ū����
            ///�̭�����Ƴ��S����
        }
        cout << word; /// �����@�ӹ���A��Ū���

        return word.length(); /// �̫�A����װe�X�h
    }
};
