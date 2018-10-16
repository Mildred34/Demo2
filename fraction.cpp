#include "fraction.h"

Zfraction::Zfraction(int a, int b) 
{
	int p;
	p=pgcd(a, b);
	m_num = a / p;
	m_den = b / p;
}

Zfraction::Zfraction()
{
	m_num = 0;
	m_den = 0;
}

void Zfraction::afficher() const{
	cout << "numerateur" << m_num << endl;
	cout << "denominateur" << m_den << endl;
}

Zfraction Zfraction::somme(const Zfraction& b) const{
	int c,i,j;
	Zfraction result;
	c = ppcm(m_den, b.m_den);
	i = c / m_den;
	j = c / b.m_den;
	result.m_num = m_num*i + b.m_num*j;
	result.m_den = c;
	c = pgcd(result.m_num, result.m_den);
	result.m_num /= c;
	result.m_den /= c;
	return  result;
}

int pgcd(int a, int b)
{
	while (b != 0)
	{
		const int t = b;
		b = a%b;
		a = t;
	}
	return a;
}

int ppcm(int a, int b){
	int c, d;
	c = a;
	d = b;
	while (a != b)
	{
		if (a > b)
			b = b + d;
		else if (a < b)
			a = a + c;
	}
	return a;
}

Zfraction operator+(const Zfraction& a,const Zfraction& b) {
	Zfraction c;
	c = a.somme(b);
	return c;
}
Zfraction Zfraction::prod(Zfraction const& b) const{
	Zfraction c;
	int d;
	c.m_num = m_num*b.m_num;
	c.m_den = m_den*b.m_den;
	d = pgcd(c.m_num, c.m_den);
	c.m_num/=d;
	c.m_den/=d;
	return c;
}

Zfraction operator*(Zfraction const& a, Zfraction const& b){
	return a.prod(b);
}

/*void Zfraction::affich1(ostream &fluxi) const{
	
}*/

ostream &operator<<(ostream &fluxi,Zfraction const& a){
	fluxi << a.m_num << "numérateur" << a.m_den << "dénominateur" << endl;
	return fluxi;
}