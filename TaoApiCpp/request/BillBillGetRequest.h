#ifndef BILLBILLGETREQUEST_H
#define BILLBILLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/BillBillGetResponse.h>

/**
 * TOP API: 查询单笔账单明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBillGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBid() const
;  void setBid (qlonglong bid);

 QString getFields() const
;  void setFields (QString fields);


  virtual BillBillGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 账单编号
 **/
  qlonglong bid;

/**
 * @brief 传入需要返回的字段
 **/
  QString fields;

};

#endif  /* BILLBILLGETREQUEST_H */
