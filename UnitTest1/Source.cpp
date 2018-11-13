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
			Student student = Student("Son Goku", "B00748127", "Fighting", 2);
			std::string expectedName = "Son Goku";
			std::string expectedCode = "B00748127";
			std::string expectedCourse = "Fighting";
			int expectedYear = 2;
			std::string actualCourse, actualCode, actualName;
			int actualYear;

			//Act
			actualName = student.GetName();
			actualCode = student.GetRegistrationID();
			actualCourse = student.GetCourse();
			actualYear = student.GetYearofStudy();

			//Assert
			Assert::AreEqual(expectedName, actualName);
			Assert::AreEqual(expectedCode, actualCode);
			Assert::AreEqual(expectedCourse, actualCourse);
			Assert::AreEqual(expectedYear, actualYear);
		}
		
		TEST_METHOD(TestCustomConstructor)
		{

	};
}