#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTestsModule)
	{
	public:
		
		TEST_METHOD(TestCustomConstructor)
		{
			// TODO: Your test code here
			//Arrange
			Module module1 = Module("Object Oriented Programming", "COM326", 20, 100);
			std::string expectedCourse = "Object Oriented Programming";
			std::string expectedCode = "COM326";
			int expectedCredit = 20;
			int expectedMark = 100;
			std::string actualCourse, actualCode;
			int actualCredit, actualMark;

			//Act
			actualCourse = module1.getModuleTitle();
			actualCode = module1.getModuleCode();
			actualCredit = module1.getModuleCreditPoints();
			actualMark = module1.getModuleMark();
			//Assert
			Assert::AreEqual(expectedCourse, actualCourse);
			Assert::AreEqual(expectedCode, actualCode);
			Assert::AreEqual(expectedCredit, actualCredit);
			Assert::AreEqual(expectedMark, actualMark);
		}

		TEST_METHOD(TestSetCode)
		{
			//Arrange
			Module module1 = Module();
			std::string expected{"COM326"};
			std::string actual{};

			//Act
			module1.setModuleCode("COM326");
			actual = module1.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetCode)
		{
			//Arrange
			Module module1 = Module("Object Oriented Programming", "COM326", 20, 100);
			std::string expected{ "COM326" };
			std::string actual{};

			//Act
			actual = module1.getModuleCode();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetCredit)
		{
			//Arrange
			Module module1 = Module();
			int expected{ 20 };
			int actual{};

			//Act
			module1.setModuleCreditPoints(20);
			actual = module1.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetCredit)
		{
			//Arrange
			Module module1 = Module("Object Oriented Programming", "COM326", 20, 100);
			int expected{ 20 };
			int actual{};

			//Act
			actual = module1.getModuleCreditPoints();

			//Assert
			Assert::AreEqual(expected, actual);
		}

	};
}