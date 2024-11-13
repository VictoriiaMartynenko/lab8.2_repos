#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

size_t MaxLength(const string s);

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// ���� 1: ����� � �������������� ���� ���� �������
			string str1 = "abc12345def678gh9";
			Assert::AreEqual((size_t)5, MaxLength(str1), L"������� ��������� ��� str1");

			// ����� � ���� ����������� ����
			string str2 = "abcdef12345678ghijkl";
			Assert::AreEqual((size_t)8, MaxLength(str2), L"������� ��������� ��� str2");

			//  ����� ��� ����
			string str3 = "abcdefg";
			Assert::AreEqual((size_t)0, MaxLength(str3), L"������� ��������� ��� str3");

			// ������� �����
			string str4 = "";
			Assert::AreEqual((size_t)0, MaxLength(str4), L"������� ��������� ��� str4");

			//  ����� � ������� �������������� ���� �������� �������
			string str5 = "12a34b567c89";
			Assert::AreEqual((size_t)3, MaxLength(str5), L"������� ��������� ��� str5");

			//  ����� � ���� ������ ����������� ����
			string str6 = "a1234567890b";
			Assert::AreEqual((size_t)10, MaxLength(str6), L"������� ��������� ��� str6");
		}
	};
}

