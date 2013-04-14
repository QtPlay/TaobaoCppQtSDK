#ifndef FENXIAOORDERCLOSEREQUEST_H
#define FENXIAOORDERCLOSEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderCloseResponse.h>

/**
 * TOP API: 供应商关闭未付款采购单.可传入一个主单号或是多个子单号，多个子单号之间以‘，’隔开
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderCloseRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getMessage() const
;  void setMessage (QString message);

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);

 QString getSubOrderIds() const
;  void setSubOrderIds (QString subOrderIds);


  virtual FenxiaoOrderCloseResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 关闭理由,特殊字符会被转义，会改变长度，有特殊字符是请注意
 **/
  QString message;

/**
 * @brief 采购单编号
 **/
  qlonglong purchaseOrderId;

/**
 * @brief 子采购单ID，可传多笔子单ID，逗号分隔
 **/
  QString subOrderIds;

};

#endif  /* FENXIAOORDERCLOSEREQUEST_H */
