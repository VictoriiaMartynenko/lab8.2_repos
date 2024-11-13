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
			// Тест 1: рядок з послідовностями цифр різної довжини
			string str1 = "abc12345def678gh9";
			Assert::AreEqual((size_t)5, MaxLength(str1), L"Невірний результат для str1");

			// рядок з однією послідовністю цифр
			string str2 = "abcdef12345678ghijkl";
			Assert::AreEqual((size_t)8, MaxLength(str2), L"Невірний результат для str2");

			//  рядок без цифр
			string str3 = "abcdefg";
			Assert::AreEqual((size_t)0, MaxLength(str3), L"Невірний результат для str3");

			// порожній рядок
			string str4 = "";
			Assert::AreEqual((size_t)0, MaxLength(str4), L"Невірний результат для str4");

			//  рядок з кількома послідовностями цифр однакової довжини
			string str5 = "12a34b567c89";
			Assert::AreEqual((size_t)3, MaxLength(str5), L"Невірний результат для str5");

			//  рядок з дуже довгою послідовністю цифр
			string str6 = "a1234567890b";
			Assert::AreEqual((size_t)10, MaxLength(str6), L"Невірний результат для str6");
		}
	};
}

