#include "Polynomial.h"

Polynomial::Polynomial() : coef () {
    degree = 0;
	/*for(int i = 0; i <= MAX_DEGREE ; i++){ // 변수 초기화
		coef[i] = 0;*/
}

Polynomial::~Polynomial() {
   // cout << "deconstructor" << endl;
}


void Polynomial::read() { 
	cin >> degree; // 다항식의 최고 차항 받기

	for (int i = degree; i >= 0; i--) // 다항식의 계수
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

void Polynomial::sub(Polynomial a, Polynomial b) { 
	*this = a;
    if(a.degree < b.degree) degree = b.degree;
		for (int i = 0; i <= b.degree; i++)
			coef[i] -= b.coef[i];
		

	/*if(b.degree > a.degree) { // 최고 차항 차수 비교
		degree = b.degree;
		for (i = 0; i <= b.degree; i++)
			coef[i] = a.coef[i] - b.coef[i];
	}
	else {
		*this = a; 
		for (i = 0; i <= a.degree; i++)
			coef[i] -= b.coef[i];
	}*/
}
void Polynomial::mult(Polynomial a, Polynomial b) {
	coef[MAX_DEGREE * 2]; // 배열 크기 2배 
	for(int i = 0; i <= MAX_DEGREE * 2 ; i++){ // 배열 초기화
		coef[i] = 0;
	}
	degree = a.degree + b.degree; // 함수를 호출한 객체의 최고 차항의 차수 정의
    for(int i = 0; i <= a.degree; i++){ // 재귀함수 사용해서 각 계수들 곱하기
		for(int j = 0; j <= b.degree; j++) {
			coef[i+j] += a.coef[i] * b.coef[j]; // 차수끼리 더해서 저장
		}
	}
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


void Polynomial::trim() {  
    int i; 

    for (i = degree ; i >= 0; i--) { // 최고차항의 계수가 0이 아닐 때를 찾기위해 최고차항 부터 탐색
        if (coef[i] != 0)
		break; // 만약 현재 최고차항의 계수가 0이 아니라면 반복문 종료
        degree--; // 최고차항의 계수가 0이라면 최고차항의 차수 값 1 감소시키고 반복           
    }
}