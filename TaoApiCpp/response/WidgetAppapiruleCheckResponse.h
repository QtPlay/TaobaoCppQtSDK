#ifndef WIDGETAPPAPIRULECHECKRESPONSE_H
#define WIDGETAPPAPIRULECHECKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: app指定api名称获取此api的http调用方法、app是否有请求权限、是否需要授权等信息。仅支持widget入口调用。调用入口为/widget。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret,secret)。timestamp为60分钟内有效
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetAppapiruleCheckResponse : public TaoResponse
{
public:
 virtual ~WidgetAppapiruleCheckResponse() { }

  QString getCallPermission() const;
  void setCallPermission (QString callPermission);  QString getHttpMethod() const;
  void setHttpMethod (QString httpMethod);  QString getNeedAuth() const;
  void setNeedAuth (QString needAuth);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 当前app是否可以调用次api。可以返回true，不可用返回false。
 **/
  QString callPermission;

/**
 * @brief 此api请求的http类型：get或post
 **/
  QString httpMethod;

/**
 * @brief 此api是否需要用户授权。true表示必需授权，false表示可选授权或无需授权
 **/
  QString needAuth;

};

#endif
