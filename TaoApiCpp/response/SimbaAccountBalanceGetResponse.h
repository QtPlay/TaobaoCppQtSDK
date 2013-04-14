#ifndef SIMBAACCOUNTBALANCEGETRESPONSE_H
#define SIMBAACCOUNTBALANCEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 获取实时余额，”元”为单位
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAccountBalanceGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAccountBalanceGetResponse() { }

  QString getBalance() const;
  void setBalance (QString balance);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 实时余额，”元”为单位
 **/
  QString balance;

};

#endif
