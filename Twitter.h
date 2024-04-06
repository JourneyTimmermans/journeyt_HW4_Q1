#ifndef JOURNEYT_HW4_Q1_TWITTER_H
#define JOURNEYT_HW4_Q1_TWITTER_H


#include"SocialMediaAccount.h"

template<class T>
class Twitter:public SocialMediaAccount<T>{
public:
    Twitter();
    Twitter(T user);
    void retweet();

    //Getters and setters
    void setRetweetCount(int count);
    int getRetweetCount() const;

private:
    int retweetCount;
};

#include "Twitter.cpp"
#endif

