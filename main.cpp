/*************************************************************************
** Author : Journey Timmermans
** Program : hw4, q1
** Date Created : April 2, 2024
** Date Last Modified : April 6, 2024
** Usage : No command line arguments
**
** Problem:
Create templates for social media profiles for twitter and instagram and add some example
 profiles to test your code
*************************************************************************/
#include <iostream>
#include <string>
#include "Twitter.h"
#include "Instagram.h"

//Profile structure using ID and username
struct Profile {
    int userId;
    std::string username;
};


int main() {
    //Example profile for twitter that's public
    Twitter<std::string> TS;
    TS.setHandler("John Doe");
    TS.addFollower("Follower 1");
    TS.addFollower("Follower 2");
    TS.addFollowed("Followed 1");
    TS.addFollowed("Followed 2");
    TS.retweet();
    TS.setPrivacy(false);
    TS.displayFollowers();
    TS.displayFollowed();
    std::cout << "Retweet count: " << TS.getRetweetCount() << std::endl;

    //Example profile for twitter that's private
    Profile tpProfile = {10, "Jane Doe"};
    Twitter<Profile> TP(tpProfile);
    std::string userString2 = "Jane Doe";
    TP.addFollower({11, "Follower 3"});
    TP.addFollowed({13,"Followed 3"});
    TP.retweet();
    TP.setPrivacy(true);
    TP.displayFollowers();
    TP.displayFollowed();
    std::cout << "Retweet count: " << TP.getRetweetCount() << std::endl;

    //Example profile for instagram that's public
    Instagram<std::string> IS("Journey");
    IS.addFollower("Follower 4");
    IS.addFollower("Follower 5");
    IS.addFollowed("Followed 4");
    IS.like();
    IS.setPrivacy(false);
    IS.displayFollowers();
    IS.displayFollowed();
    std::cout << "Like count: " << IS.getLikeCount() << std::endl;

    //Example profile for instagram that's private
    Profile ipProfile = {5, "Timmermans"};
    Instagram<Profile> IP(ipProfile);
    IP.addFollower({6, "Follower 6"});
    IP.addFollowed({7,"Follower 5"});
    IP.like();
    IP.setPrivacy(true);
    IP.displayFollowers();
    IP.displayFollowed();
    std::cout << "Like count: " << IP.getLikeCount() << std::endl;

    return 0;
}
