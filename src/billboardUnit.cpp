#include "billboardUnit.hpp"
#include <thread>
#include <unistd.h>
#include <iostream>

/* PUBLIC METHODS */

billboardUnit::billboardUnit() {
	running = false;
	setCurrentAnimationIndex(0);
	currentAnimationIndex = 0;
	currentFrameIndex = 0;
}

billboardUnit::~billboardUnit() {
	stopAnimation();
}

void billboardUnit::addAnimation(animation a) {
        animations.push_back(a);
}

bool billboardUnit::setCurrentAnimationIndex(unsigned int index) {
    if (index < animations.size()) {
        currentAnimationIndex = index;
        return true;
    }

    return false;
}

int billboardUnit::getCurrentAnimationIndex() {
    return currentAnimationIndex;
}

animation billboardUnit::getCurrentAnimation() {
    return animations[currentAnimationIndex];
}

int billboardUnit::getCurrentFrameIndex() {
    return currentFrameIndex;
}

/* TODO */
void billboardUnit::run(){
	running = true;

	std::thread t(&billboardUnit::threadRun, this);
	t.detach();
}

void billboardUnit::stopAnimation(){
	running = false;
	cout << "Stopping animation!" << endl;
}

/* PRIVATE METHODS */

void billboardUnit::updateFrameIndex() {
	if (currentFrameIndex < animations[currentAnimationIndex].sequence.size()-1)
		currentFrameIndex++;
	else  {
		if (animations[currentAnimationIndex].repeat)
			currentFrameIndex = 0;
	}
}

void billboardUnit::threadRun() {
	cout << "Running!" << endl;
	while (running) {
		usleep(animations[currentAnimationIndex].delay);
		updateFrameIndex();
		cout << currentFrameIndex << endl;
	}
}
