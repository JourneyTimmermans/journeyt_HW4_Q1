#include"Twitter.h"

//Initialization
template<class T>
Twitter<T>::Twitter() : SocialMediaAccount<T>(), retweetCount(0) {}

template<class T>
Twitter<T>::Twitter(T user) : SocialMediaAccount<T>(user), retweetCount(0) {}


//Function to increase amount of retweets
template<class T>
void Twitter<T>::retweet() {
    ++retweetCount;
}


//Functions for getters and setters
template<class T>
void Twitter<T>::setRetweetCount(int count) {
    retweetCount = count;
}

template<class T>
int Twitter<T>::getRetweetCount() const {
    return retweetCount;
}