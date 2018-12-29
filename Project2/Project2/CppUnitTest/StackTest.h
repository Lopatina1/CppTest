#ifndef STACKTEST_H
#define STACKTEST_H


#include "../Project2/Stack.h"
#include "../Project2/Vector.h"

#include <cppunit\extensions\TestFactoryRegistry.h>
#include <cppunit\ui\text\TextTestRunner.h>
#include <cppunit\extensions\HelperMacros.h>


class StackTest : public CppUnit::TestCase
{
private:
	Stack *m_stack;

public:
	void Stack_CheckConstructor()
	{
		m_stack = new Stack(2);

		int expectedSize = 0;

		CPPUNIT_ASSERT_EQUAL_MESSAGE("Message", m_stack->Size(), expectedSize);
	}


	void Stack_CheckPush()
	{
		Vector vector;
		vector.PushBack(5);

		m_stack = new Stack(3);

		for (int i = 0; i < 3; ++i)
		{
			vector.PushBack(i);
			m_stack->Push(vector);
		}

		int expectedSize = 3;

		CPPUNIT_ASSERT_EQUAL_MESSAGE("Message", m_stack->Size(), expectedSize);
	}


	void Stack_CheckClear()
	{
		Vector vector; 	

		m_stack = new Stack(3);

		for (int i = 0; i < 3; ++i)
		{
			vector.PushBack(i);
			m_stack->Push(vector);
		}

		m_stack->Clear();

		int expectedSize = 0;

		CPPUNIT_ASSERT_EQUAL_MESSAGE("Message", m_stack->Size(), expectedSize);
	}


	void Stack_CheckIsEmpty()
	{
		Vector vector;

		m_stack = new Stack(3);

		for (int i = 0; i < 3; ++i)
		{
			vector.PushBack(i);
			m_stack->Push(vector);
		}

		m_stack->Clear();

		CPPUNIT_ASSERT_EQUAL_MESSAGE("Message", m_stack->IsEmpty(), true);
	}


	void Stack_CheckSize()
	{
		Vector vector;

		m_stack = new Stack(3);

		for (int i = 0; i < 3; ++i)
		{
			vector.PushBack(i);
			m_stack->Push(vector);
		}

		int expectedSize = 3;

		CPPUNIT_ASSERT_EQUAL_MESSAGE("Message", m_stack->Size(), expectedSize);
	}



	CPPUNIT_TEST_SUITE(StackTest);

	CPPUNIT_TEST(Stack_CheckConstructor);
	CPPUNIT_TEST(Stack_CheckPush);
	CPPUNIT_TEST(Stack_CheckClear);	
	CPPUNIT_TEST(Stack_CheckIsEmpty);
	CPPUNIT_TEST(Stack_CheckSize);
	
	CPPUNIT_TEST_SUITE_END();
};

//CPPUNIT_TEST_SUITE_REGISTRATION(StackTest);


#endif // !STACKTEST_H