#include "Polynomial.h"

Polynomial::Polynomial() {
    degree = 0;
}

Polynomial::~Polynomial() {
   // cout << "deconstructor" << endl;
}


void Polynomial::read() { //다항식 계수 받기
	cin >> degree;

	for (int i = degree; i >= 0; i--)
		cin >> coef[i];
}

void Polynomial::add(Polynomial a, Polynomial b) { //차수 비교
	*this = a;
	if(a.degree < b.degree) degree = b.degree;
	for(int i = 0; i <= b.degree; i++)
		coef[i] += b.coef[i];
	
	/*if (a.degree > b.degree) {
		*this = a; //C를 가르킴
		for (i = 0; i <= b.degree; i++)
			coef[i] += b.coef[i];
	}
	else {
		*this = b;
		for (i = 0; i <= a.degree; i++)
			coef[i] += a.coef[i];
	}*/
}


void Polynomial::display() {
	int i;

	for (i = degree; i > 0; i--) { //내림차순 역순 정렬
		if (coef[i]) {
			if (i != degree) //최고차항이 아니면 + 더하기
				cout << " + ";
			if (coef[i] == 1) //계수 1이면 1생략
				cout << "x^" << i;
			else
				cout << coef[i] << "x^" << i;
		}
	}
	if (coef[0])
		cout << " + " << coef[0];
		
	cout << endl;
}

