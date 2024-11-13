#include <iostream>
#include <string>
using namespace std;

size_t MaxLength(const string s)
{
    size_t len = 0, maxLen = 0;
    size_t start = 0, finish;

    // ���� ��� ������ ������������� ���� � �����
    while ((start = s.find_first_of("0123456789", start)) != -1)
    {
        finish = s.find_first_not_of("0123456789", start + 1);
        if (finish == -1)
            finish = s.length();

        // ���������� ������� ������� ����������� ����
        len = finish - start;

        // ���� ������� ������������������ �������, ��������� maxLen
        if (len > maxLen)
            maxLen = len;

        // ��������� �������� ������� �����������
        start = finish + 1;
    }

    return maxLen;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "Length of max groups of digits: " << MaxLength(str) << endl;
    return 0;
}
