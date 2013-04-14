#ifndef WIDGETAPPAPIRULECHECKREQUEST_H
#define WIDGETAPPAPIRULECHECKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WidgetAppapiruleCheckResponse.h>

/**
 * TOP API: app指定api名称获取此api的http调用方法、app是否有请求权限、是否需要授权等信息。仅支持widget入口调用。调用入口为/widget。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret,secret)。timestamp为60分钟内有效
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WidgetAppapiruleCheckRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getApiName() const
;  void setApiName (QString apiName);


  virtual WidgetAppapiruleCheckResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要判断权限的api名称，如果指定的api不存在，报错invalid method
 **/
  QString apiName;

};

#endif  /* WIDGETAPPAPIRULECHECKREQUEST_H */
