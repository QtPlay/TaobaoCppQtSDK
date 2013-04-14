#ifndef SUBUSERDUTYSGETREQUEST_H
#define SUBUSERDUTYSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SubuserDutysGetResponse.h>

/**
 * TOP API: 通过主账号Nick获取该账户下的所有职务信息，职务信息中包括职务ID、职务名称以及职务等级（通过主账号登陆只能获取属于该主账号下的职务信息）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubuserDutysGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual SubuserDutysGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主账号用户名
 **/
  QString userNick;

};

#endif  /* SUBUSERDUTYSGETREQUEST_H */
