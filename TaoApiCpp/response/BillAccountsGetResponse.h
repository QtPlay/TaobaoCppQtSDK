#ifndef BILLACCOUNTSGETRESPONSE_H
#define BILLACCOUNTSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Account.h>


/**
 * @brief TOP RESPONSE API: 查询费用账户信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillAccountsGetResponse : public TaoResponse
{
public:
 virtual ~BillAccountsGetResponse() { }

  QList<Account> getAccounts() const;
  void setAccounts (QList<Account> accounts);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回的科目信息
 **/
  QList<Account> accounts;

/**
 * @brief 返回记录行数
 **/
  qlonglong totalResults;

};

#endif
