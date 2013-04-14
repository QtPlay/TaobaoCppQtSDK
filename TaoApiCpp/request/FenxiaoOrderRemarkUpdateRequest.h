#ifndef FENXIAOORDERREMARKUPDATEREQUEST_H
#define FENXIAOORDERREMARKUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrderRemarkUpdateResponse.h>

/**
 * TOP API: 供应商修改采购单备注
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrderRemarkUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);

 QString getSupplierMemo() const
;  void setSupplierMemo (QString supplierMemo);

 qlonglong getSupplierMemoFlag() const
;  void setSupplierMemoFlag (qlonglong supplierMemoFlag);


  virtual FenxiaoOrderRemarkUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 采购单编号
 **/
  qlonglong purchaseOrderId;

/**
 * @brief 备注旗子(供应商操作)
 **/
  QString supplierMemo;

/**
 * @brief 旗子的标记，1-5之间的数字。非1-5之间，都采用1作为默认。 
1:红色 
2:黄色 
3:绿色 
4:蓝色 
5:粉红色
 **/
  qlonglong supplierMemoFlag;

};

#endif  /* FENXIAOORDERREMARKUPDATEREQUEST_H */
