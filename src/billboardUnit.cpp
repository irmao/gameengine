#include "billboardUnit.hpp"


/* PUBLIC METHODS */

billboardUnit::billboardUnit() {}

billboardUnit::~billboardUnit() {}

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
void billboardUnit::run(){}

/* PRIVATE METHODS */

void billboardUnit::updateFrameIndex() {
    currentFrameIndex++;
    
    if (animations[currentAnimationIndex].repeat 
        && currentFrameIndex == animations[currentAnimationIndex].sequence.size())
        currentFrameIndex = 0;
}

int main(void) {return 0;} // for test only
