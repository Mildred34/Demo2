#include <iostream>
#include "fraction.h"
using namespace std;


void main(){
	Zfraction a(4,5),b(2),c,d;      //D�clare une fraction valant 4/5
	c = a + b;
	c.afficher();
	cout << c;
}