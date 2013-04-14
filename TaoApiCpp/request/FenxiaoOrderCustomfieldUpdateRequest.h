#ifndef FENXIAOORDERCUSTOMFIELDUPDATEREQUEST_H
#define FENXIAOORDERCUSTOMFIELDUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderCustomfieldUpdateResponse.h>

/**
 * TOP API: 采购单自定义字段
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderCustomfieldUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getIsvCustomKey() const
;  void setIsvCustomKey (QString isvCustomKey);

 QString getIsvCustomValue() const
;  void setIsvCustomValue (QString isvCustomValue);

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);


  virtual FenxiaoOrderCustomfieldUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 自定义key
 **/
  QString isvCustomKey;

/**
 * @brief 自定义的值
 **/
  QString isvCustomValue;

/**
 * @brief 采购单id
 **/
  qlonglong purchaseOrderId;

};

#endif  /* FENXIAOORDERCUSTOMFIELDUPDATEREQUEST_H */
