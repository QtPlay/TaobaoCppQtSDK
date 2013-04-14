#ifndef USERACCOUNTFREEZEGETRESPONSE_H
#define USERACCOUNTFREEZEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/AccountFreeze.h>


/**
 * @brief TOP RESPONSE API: 查询支付宝账户冻结类型的冻结金额。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserAccountFreezeGetResponse : public TaoResponse
{
public:
 virtual ~UserAccountFreezeGetResponse() { }

  QList<AccountFreeze> getFreezeItems() const;
  void setFreezeItems (QList<AccountFreeze> freezeItems);  QString getTotalResults() const;
  void setTotalResults (QString totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 冻结金额列表
 **/
  QList<AccountFreeze> freezeItems;

/**
 * @brief 冻结总条数
 **/
  QString totalResults;

};

#endif
