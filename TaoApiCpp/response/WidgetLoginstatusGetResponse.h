#ifndef WIDGETLOGINSTATUSGETRESPONSE_H
#define WIDGETLOGINSTATUSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 获取当前浏览器用户在淘宝登陆状态。如果传了session并且此用户已在淘宝登陆，返回nick和userId。仅支持widget入口调用。调用入口为/widget。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret, secret)。timestamp为60分钟内有效
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetLoginstatusGetResponse : public TaoResponse
{
public:
 virtual ~WidgetLoginstatusGetResponse() { }

  bool getIsLogin() const;
  void setIsLogin (bool isLogin);  QString getNick() const;
  void setNick (QString nick);  QString getUserId() const;
  void setUserId (QString userId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 当前浏览器用户是否已登陆。如果指定了nick，但是nick与浏览器用户不一致返回false。如果未指定nick，以浏览器用户登陆状态为准。如果指定了nick且与浏览器用户一致，以浏览器用户登陆状态为准
 **/
  bool isLogin;

/**
 * @brief 淘宝用户的昵称，传了session且已登陆才返回
 **/
  QString nick;

/**
 * @brief 淘宝用户的数字id，传了session且已登录才返回。
 **/
  QString userId;

};

#endif
