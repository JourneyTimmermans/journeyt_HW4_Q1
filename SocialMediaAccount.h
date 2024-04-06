#ifndef JOURNEYT_HW4_Q1_SOCIALMEDIAACCOUNT_H
#define JOURNEYT_HW4_Q1_SOCIALMEDIAACCOUNT_H

const int maxFollowers=10;
const int maxFollowed=10;


template<class T>
class SocialMediaAccount{
public:
    SocialMediaAccount();
    SocialMediaAccount(T user);


    //Getters and setter
    void setPrivacy(bool isPrivate);
    bool getPrivacy() const;

    void setHandler(T user);
    T getHandler() const;

    void addFollower(T user);
    void addFollowed(T user);

    void setFollowerCount(T user);
    int getFollowerCount() const;

    void setFollowedCount(T user);
    int getFollowedCount() const;

    //Display followers and followed
    void displayFollowers() const;
    void displayFollowed() const;
private:
    //Variable dictionary
    T handler;
    int followerCount, followedCount;
    T followers[maxFollowers];
    T followed[maxFollowed];
    bool privacy;

};

#include "SocialMediaAccount.cpp"
#endif

