#ifndef INVENTORYOCCUPYCANCELREQUEST_H
#define INVENTORYOCCUPYCANCELREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryOccupyCancelResponse.h>

/**
 * TOP API: 商家取消预留库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryOccupyCancelRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBizUniqueCode() const
;  void setBizUniqueCode (QString bizUniqueCode);

 QString getOperateCode() const
;  void setOperateCode (QString operateCode);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual InventoryOccupyCancelResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商家外部定单号
 **/
  QString bizUniqueCode;

/**
 * @brief 申请预留时的操作返回码
 **/
  QString operateCode;

/**
 * @brief 商家仓库编码
 **/
  QString storeCode;

};

#endif  /* INVENTORYOCCUPYCANCELREQUEST_H */
