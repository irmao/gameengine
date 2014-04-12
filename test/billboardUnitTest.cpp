#include "billboardUnit.hpp"
#include "animation.hpp"
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main(void) {
	cout << "Iniciando" << endl;

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(8);
	v.push_back(16);
	v.push_back(32);
	v.push_back(64);

	for (unsigned int i=0; i<v.size(); i++)
		cout << v[i] << " ";

	cout << endl;

	animation a;
	a.sequence = v;
	a.delay = 500;
	//a.repeat = false;
	a.repeat = true;

	billboardUnit b;
	b.addAnimation(a);

	b.run();

	for (int i=0; i<1000; i++) {
		usleep(100);
		cout << b.getCurrentFrameIndex() << endl;
	}

	b.stopAnimation();

	for (int i = 0; i < 1000; i++) {
		usleep(100);
		cout << b.getCurrentFrameIndex() << endl;
	}
}


