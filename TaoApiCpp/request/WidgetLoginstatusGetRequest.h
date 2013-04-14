#ifndef WIDGETLOGINSTATUSGETREQUEST_H
#define WIDGETLOGINSTATUSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WidgetLoginstatusGetResponse.h>

/**
 * TOP API: 获取当前浏览器用户在淘宝登陆状态。如果传了session并且此用户已在淘宝登陆，返回nick和userId。仅支持widget入口调用。调用入口为/widget。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret, secret)。timestamp为60分钟内有效
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetLoginstatusGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual WidgetLoginstatusGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 指定判断当前浏览器登陆用户是否此昵称用户，并且返回是否登陆。如果用户不一致返回未登陆，如果用户一致且已登录返回已登陆
 **/
  QString nick;

};

#endif  /* WIDGETLOGINSTATUSGETREQUEST_H */
