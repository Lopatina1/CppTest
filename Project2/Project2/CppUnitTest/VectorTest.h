#ifndef VECTORTEST_H
#define VECTORTEST_H


#include "../Project2/Vector.h"

#include <cppunit\extensions\TestFactoryRegistry.h>
#include <cppunit\ui\text\TextTestRunner.h>
#include <cppunit\extensions\HelperMacros.h>


class VectorTest : public CppUnit::TestCase
{
private:
	Vector m_vector;

public:
	void Vector_CheckGetThis()
	{
		int expected = 0;

		for (int i = 0; i < 3; ++i)
		{
			m_vector.PushBack(i);
		}

		CPPUNIT_ASSERT_MESSAGE("Message", m_vector.GetThis(0) == expected);
	}


	void Vector_CheckPushBack()
	{
		m_vector.PushBack(5);

		CPPUNIT_ASSERT_MESSAGE("Message", m_vector.GetThis(0) == 5);
	}


	void Vector_CheckPopBack()
	{
		int expectedSize = 2;

		for (int i = 0; i < 3; ++i)
		{
			m_vector.PushBack(i);
		}

		m_vector.PopBack();

		CPPUNIT_ASSERT_MESSAGE("Message", m_vector.Size() == expectedSize);
	}


	void Vector_CheckSize()
	{
		int expectedSize = 3;

		for (int i = 0; i < 3; ++i)
		{
			m_vector.PushBack(i);
		}

		CPPUNIT_ASSERT_MESSAGE("Message", m_vector.Size() == expectedSize);
	}


	void Vector_CheckClear()
	{
		for (int i = 0; i < 3; ++i)
		{
			m_vector.PushBack(i);
		}

		m_vector.Clear();

		CPPUNIT_ASSERT_MESSAGE("Message", m_vector.Size() == 0);
	}


	void Vector_CheckIsEmpty()
	{
		for (int i = 0; i < 3; ++i)
		{
			m_vector.PushBack(i);
		}

		m_vector.Clear();

		CPPUNIT_ASSERT_EQUAL_MESSAGE("Message", m_vector.IsEmpty(), true);
	}


	CPPUNIT_TEST_SUITE(VectorTest);
	CPPUNIT_TEST(Vector_CheckGetThis);
	CPPUNIT_TEST(Vector_CheckPushBack);
	CPPUNIT_TEST(Vector_CheckPopBack);
	CPPUNIT_TEST(Vector_CheckSize);
	CPPUNIT_TEST(Vector_CheckClear);
	CPPUNIT_TEST(Vector_CheckIsEmpty);
	CPPUNIT_TEST_SUITE_END();
};

//CPPUNIT_TEST_SUITE_REGISTRATION(VectorTest);


#endif // !VECTORTEST_H

