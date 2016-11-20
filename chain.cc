#include <iostream>
#include "chain.h"

Chain& Chain::add(int val)
	{
	m_var += val; 
	return *this;
	}

Chain& Chain::sub(int val)
	{
	m_var -= val;
	return *this;
	}

Chain& Chain::mult(int val)
	{
	m_var *= val;
	return *this;
	}

int Chain::getVar()
	{
	return m_var;
	}

