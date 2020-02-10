
#include "Singleton.h"

#include<iostream>

using namespace std;

int main(){
	Singleton* s1 = Singleton::GetInstance();

	Singleton* s2 = Singleton::GetInstance();

	return 0;
}