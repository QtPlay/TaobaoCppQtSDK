#ifndef FENXIAOORDERCONFIRMPAIDREQUEST_H
#define FENXIAOORDERCONFIRMPAIDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderConfirmPaidResponse.h>

/**
 * TOP API: 供应商确认收款（非支付宝交易）。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderConfirmPaidRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getConfirmRemark() const
;  void setConfirmRemark (QString confirmRemark);

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);


  virtual FenxiaoOrderConfirmPaidResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 确认支付信息（字数小于100）
 **/
  QString confirmRemark;

/**
 * @brief 采购单编号。
 **/
  qlonglong purchaseOrderId;

};

#endif  /* FENXIAOORDERCONFIRMPAIDREQUEST_H */
