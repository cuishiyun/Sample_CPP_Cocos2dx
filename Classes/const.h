
enum base_menu{
    USER_SYSTEM=0,
    IAP_SYSTEM,
    SHARE_SYSTEM,
    ADS_SYSTEM,
    SOCIAL_SYSTEM,
    PUSH_SYSTEM,
    ANALYTICS_SYSTEM
};

enum system_level{
    USER_LEVEL=100,
    IAP_LEVEL=200,
    SHARE_LEVEL=300,
    ADS_LEVEL=400,
    SOCIAL_LEVEL=500,
    PUSH_LEVEL=600,
    ANALYTICS_LEVEL=700,
    BACK_BUTTON=1000
};

enum user_action{
    USER_LOGIN=0,
    USER_LOGOUT,
    USER_ENTERPLATFORM,
    USER_SHOWTOOLBAR,
    USER_HIDETOOLBAR,
    USER_ACCOUNTSWITCH,
    USER_REALNAMEREGISTER,
    USER_ANTIADDICTIONQUERY,
    USER_SUBMITLOGINGAMEROLE
};
enum ads_action{
    ADS_BANNER=0,
    ADS_FULLSCREEN,
    ADS_MOREAPP,
    ADS_OFFERWALL
};
enum ads_second{
    ADS_BANNER_LEVEL=20,
    ADS_FULLSCREEN_LEVEL=40,
    ADS_MOREAPP_LEVEL=60,
    ADS_OFFERWALL_LEVEL=80
};
enum ads_banner{
    SHOW_BANNER_1 = 0,
    HIDE_BANNER_1,
    SHOW_BANNER_2,
    HIDE_BANNER_2,
    SHOW_BANNER_3,
    HIDE_BANNER_3,
    SHOW_BANNER_4,
    HIDE_BANNER_4,
    SHOW_BANNER_5,
    HIDE_BANNER_5,
};
enum ads_fullscreen{
    SHOW_FULLSCREEN_1 = 0,
    HIDE_FULLSCREEN_1,
    SHOW_FULLSCREEN_2,
    HIDE_FULLSCREEN_2,
    SHOW_FULLSCREEN_3,
    HIDE_FULLSCREEN_3,
};
enum ads_moreapp{
    SHOW_MOREAPP_1 = 0,
    HIDE_MOREAPP_1,
    SHOW_MOREAPP_2,
    HIDE_MOREAPP_2,
    SHOW_MOREAPP_3,
    HIDE_MOREAPP_3,
};
enum ads_offerwall{
    SHOW_OFFERWALL_1 = 0,
    HIDE_OFFERWALL_1,
    SHOW_OFFERWALL_2,
    HIDE_OFFERWALL_2,
    SHOW_OFFERWALL_3,
    HIDE_OFFERWALL_3,
};

enum analytics_action{
    LOG_EVENT=0,
    LOG_ERROR
};
enum iap_action{
    IAP_PAY=0,
    IAP_REQUEST
};
enum push_action{
    START_PUSH=0,
    CLOSE_PUSH,
    SET_ALIAS,
    DEL_ALIAS,
    SET_TAGS,
    DEL_TAGS
};
enum social_action{
    SUBMIT_SCORE=0,
    SHOW_LEADERBOARD,
    UNLOCK_ACHIEVEMENT,
    SHOW_ACHIEVEMENTS
};
enum share_action{
    ACTION_SHARE=0
};