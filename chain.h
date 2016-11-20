#ifndef CHAIN_H
#define CHAIN_H

class Chain
{
private:
	int m_var;

public:
	Chain():m_var(0){};

	Chain& add(int);

	Chain& sub(int);

	Chain& mult(int);

	int getVar();

};

#endif
