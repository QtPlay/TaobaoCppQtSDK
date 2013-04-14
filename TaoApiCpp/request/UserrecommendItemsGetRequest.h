#ifndef USERRECOMMENDITEMSGETREQUEST_H
#define USERRECOMMENDITEMSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserrecommendItemsGetResponse.h>

/**
 * TOP API: 根据用户信息推荐相关联的宝贝集。仅支持widget入口调用，需要同时校验淘宝cookie登陆情况，以及cookie和session授权的一致性。调用入口为/widget/rest。签名方法简化为Hmac-md5,hmac(secret+‘app_key' ＋app_key +'timestamp' + timestamp+secret)。timestamp为60分钟内有效 
此API为组件API，调用方式需要参照：http://open.taobao.com/doc/detail.htm?id=988，以JS-SDK调用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserrecommendItemsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCount() const
;  void setCount (qlonglong count);

 QString getExt() const
;  void setExt (QString ext);

 qlonglong getRecommendType() const
;  void setRecommendType (qlonglong recommendType);


  virtual UserrecommendItemsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 请求个数，建议取20个
 **/
  qlonglong count;

/**
 * @brief 额外参数
 **/
  QString ext;

/**
 * @brief 请求类型，1：用户购买意图。其他值当非法值处理
 **/
  qlonglong recommendType;

};

#endif  /* USERRECOMMENDITEMSGETREQUEST_H */
