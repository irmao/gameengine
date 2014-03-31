#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <vector>

using namespace std;

// Stores informations about an animation, like the sequence of images, delay, etc
class animation {
  public:
    vector<int> sequence;
    bool repeat;
    double delay;

    animation();
    ~animation();
};

#endif
