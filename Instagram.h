#ifndef JOURNEYT_HW4_Q1_INSTAGRAM_H
#define JOURNEYT_HW4_Q1_INSTAGRAM_H

#include "SocialMediaAccount.h"

template<class T>
class Instagram : public SocialMediaAccount<T> {
public:
    Instagram();
    Instagram(T user);
    void like();

    //Getter and setter
    void setLikeCount(int count);
    int getLikeCount() const;

private:
    int likeCount;
};

#include "Instagram.cpp"
#endif //JOURNEYT_HW4_Q1_INSTAGRAM_H
