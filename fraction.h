#include <iostream>
using namespace std;

class Zfraction{
private:
	int m_num;
	int m_den;

public:
	Zfraction(int a, int b=1;
	Zfraction();
	void afficher() const;
	Zfraction somme(const Zfraction& b) const;
	Zfraction prod(Zfraction const& b) const;
	friend ostream &operator<<(ostream &fluxi, Zfraction const& a);
	void affich1(ostream &fluxi) const;
};

int pgcd(int,int);
int ppcm(int,int);
Zfraction  operator+(const Zfraction&,const Zfraction&);
Zfraction operator*(Zfraction const&, Zfraction const&);
