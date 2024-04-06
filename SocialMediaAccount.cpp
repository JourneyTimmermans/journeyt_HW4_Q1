#include"SocialMediaAccount.h"

//Initialization
template<class T>
SocialMediaAccount<T>::SocialMediaAccount(): followerCount(0), followedCount(0), privacy(true){}

template<class T>
SocialMediaAccount<T>::SocialMediaAccount(T user):handler(user), followerCount(0), followedCount(0), privacy(true){}


//Getters and setters
template<class T>
void SocialMediaAccount<T>::setPrivacy(bool isPrivate) {
    privacy = isPrivate;
}

template<class T>
bool SocialMediaAccount<T>::getPrivacy() const {
    return privacy;
}

template<class T>
void SocialMediaAccount<T>::setHandler(T user) {
    handler = user;
}

template<class T>
T SocialMediaAccount<T>::getHandler() const {
    return handler;
}

//Function to add followers and followed
template<class T>
void SocialMediaAccount<T>::addFollower(T user) {
    if (followerCount < maxFollowers) {
        followers[followerCount++] = user;
    }
}

template<class T>
void SocialMediaAccount<T>::addFollowed(T user) {
    if (followedCount < maxFollowed) {
        followed[followedCount++] = user;
    }
}

//Display functions for followers and followed
template<class T>
void SocialMediaAccount<T>::displayFollowers() const {
    if (!privacy) {
        std::cout << "Followers: " << std::endl;
        for (int i=0; i<followerCount; ++i) {
            std::cout << followers[i] << std::endl;
        }
    }
    else {
        std::cout << "This account is private";
    }
}

template<class T>
void SocialMediaAccount<T>::displayFollowed() const {
    if (!privacy) {
        std::cout << "Followed accounts: " << std::endl;
        for (int i=0; i<followedCount; ++i) {
            std::cout << followed[i] << std::endl;
        }
    }
    else {
        std::cout << "This account is private";
    }
}

//More getters and setters
template<class T>
void SocialMediaAccount<T>::setFollowerCount(T user) {
    followerCount = user;
}

template<class T>
int SocialMediaAccount<T>::getFollowerCount() const {
    return followerCount;
}

template<class T>
void SocialMediaAccount<T>::setFollowedCount(T user) {
    followedCount = user;
}

template<class T>
int SocialMediaAccount<T>::getFollowedCount() const {
    return followedCount;
}