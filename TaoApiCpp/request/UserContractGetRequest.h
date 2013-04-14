#ifndef USERCONTRACTGETREQUEST_H
#define USERCONTRACTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserContractGetResponse.h>

/**
 * TOP API: 获取支付宝用户订购信息。在不确认用户对应用是否订购的时候，可以调用此API查询。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserContractGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getSubscriberUserId() const
;  void setSubscriberUserId (QString subscriberUserId);


  virtual UserContractGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 订购者支付宝ID。session与subscriber_user_id二选一即可。
 **/
  QString subscriberUserId;

};

#endif  /* USERCONTRACTGETREQUEST_H */
