#include "VectorTest.h"
#include "StackTest.h"

#include "conio.h"

CPPUNIT_TEST_SUITE_REGISTRATION(VectorTest);
CPPUNIT_TEST_SUITE_REGISTRATION(StackTest);


int main()
{
	CppUnit::Test *test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextTestRunner runner;
	runner.addTest(test);

	runner.run();

	getchar();
	
	return 0;
}