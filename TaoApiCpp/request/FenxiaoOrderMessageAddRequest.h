#ifndef FENXIAOORDERMESSAGEADDREQUEST_H
#define FENXIAOORDERMESSAGEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderMessageAddResponse.h>

/**
 * TOP API: 添加采购单留言，最多20条（供应商分销商都可添加）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderMessageAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getMessage() const
;  void setMessage (QString message);

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);


  virtual FenxiaoOrderMessageAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 留言内容
 **/
  QString message;

/**
 * @brief 采购单id
 **/
  qlonglong purchaseOrderId;

};

#endif  /* FENXIAOORDERMESSAGEADDREQUEST_H */
