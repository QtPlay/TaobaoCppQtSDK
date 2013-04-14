#ifndef BILLACCOUNTSGETREQUEST_H
#define BILLACCOUNTSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/BillAccountsGetResponse.h>

/**
 * TOP API: 查询费用账户信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillAccountsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAids() const
;  void setAids (qlonglong aids);

 QString getFields() const
;  void setFields (QString fields);


  virtual BillAccountsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要获取的科目ID
 **/
  qlonglong aids;

/**
 * @brief 需要返回的字段
 **/
  QString fields;

};

#endif  /* BILLACCOUNTSGETREQUEST_H */
