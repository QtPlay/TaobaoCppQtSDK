#ifndef FENXIAOORDERPAYREQUEST_H
#define FENXIAOORDERPAYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderPayResponse.h>

/**
 * TOP API: 分销商线下付款
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderPayRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getMessage() const
;  void setMessage (QString message);

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);


  virtual FenxiaoOrderPayResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付信息
 **/
  QString message;

/**
 * @brief 采购单编号
 **/
  qlonglong purchaseOrderId;

};

#endif  /* FENXIAOORDERPAYREQUEST_H */
