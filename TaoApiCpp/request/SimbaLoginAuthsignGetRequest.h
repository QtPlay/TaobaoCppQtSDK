#ifndef SIMBALOGINAUTHSIGNGETREQUEST_H
#define SIMBALOGINAUTHSIGNGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaLoginAuthsignGetResponse.h>

/**
 * TOP API: 获取登陆权限签名
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaLoginAuthsignGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaLoginAuthsignGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBALOGINAUTHSIGNGETREQUEST_H */
