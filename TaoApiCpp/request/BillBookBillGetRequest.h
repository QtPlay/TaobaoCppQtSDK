#ifndef BILLBOOKBILLGETREQUEST_H
#define BILLBOOKBILLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/BillBookBillGetResponse.h>

/**
 * TOP API: 查询单笔虚拟账户明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBookBillGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBid() const
;  void setBid (qlonglong bid);

 QString getFields() const
;  void setFields (QString fields);


  virtual BillBookBillGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 虚拟账户流水编号
 **/
  qlonglong bid;

/**
 * @brief 需要返回的字段:参见BookBill结构体
 **/
  QString fields;

};

#endif  /* BILLBOOKBILLGETREQUEST_H */
