#ifndef SIMBAACCOUNTBALANCEGETREQUEST_H
#define SIMBAACCOUNTBALANCEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAccountBalanceGetResponse.h>

/**
 * TOP API: 获取实时余额，”元”为单位
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAccountBalanceGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAccountBalanceGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAACCOUNTBALANCEGETREQUEST_H */
