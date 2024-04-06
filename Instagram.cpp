#include "Instagram.h"

//Initialization
template<class T>
Instagram<T>::Instagram() : SocialMediaAccount<T>(), likeCount(0) {}

template<class T>
Instagram<T>::Instagram(T user) : SocialMediaAccount<T>(user), likeCount(0) {}

//Function to increase amount of likes
template<class T>
void Instagram<T>::like() {
    ++likeCount;
}

//Getter and setter function definition
template<class T>
void Instagram<T>::setLikeCount(int count) {
    likeCount = count;
}

template<class T>
int Instagram<T>::getLikeCount() const {
    return likeCount;
}


#include "Instagram.h"
