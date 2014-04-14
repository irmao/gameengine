#ifndef BILLBOARDUNIT_HPP
#define BILLBOARDUNIT_HPP

#include "animation.hpp"
#include "sprite.hpp"
#include "entity3D.hpp"
#include <vector>

using namespace std;

class billboardUnit : public entity3D {
  public:
    sprite s;
    
    billboardUnit();
    ~billboardUnit();
    void addAnimation(animation a);
    bool setCurrentAnimationIndex(unsigned int index);
    int getCurrentAnimationIndex();
    animation getCurrentAnimation();
    int getCurrentFrameIndex();
    void run();
    void stopAnimation();

  private:
    vector<animation> animations;
    unsigned int currentFrameIndex; // index of the current frame in the sequence 
    int currentAnimationIndex;
    bool running;

    void updateFrameIndex();
    void threadRun();
};


#endif
