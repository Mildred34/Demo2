#include <iostream>
#include "fraction.h"
using namespace std;


void main(){
	Zfraction a(4,5),b(2),c,d;      //D�clare une fraction valant 4/5
	c = a + b; // Operation d'addition entre 2 fractions utilisant la surchage d'op�rateur +
	c.afficher();
	cout << c;
}
