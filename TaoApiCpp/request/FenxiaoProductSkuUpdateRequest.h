#ifndef FENXIAOPRODUCTSKUUPDATEREQUEST_H
#define FENXIAOPRODUCTSKUUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductSkuUpdateResponse.h>

/**
 * TOP API: 产品SKU信息更新
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkuUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAgentCostPrice() const
;  void setAgentCostPrice (QString agentCostPrice);

 QString getDealerCostPrice() const
;  void setDealerCostPrice (QString dealerCostPrice);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProperties() const
;  void setProperties (QString properties);

 qlonglong getQuantity() const
;  void setQuantity (qlonglong quantity);

 QString getSkuNumber() const
;  void setSkuNumber (QString skuNumber);

 QString getStandardPrice() const
;  void setStandardPrice (QString standardPrice);


  virtual FenxiaoProductSkuUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 代销采购价
 **/
  QString agentCostPrice;

/**
 * @brief 经销采购价
 **/
  QString dealerCostPrice;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief sku属性
 **/
  QString properties;

/**
 * @brief 产品SKU库存
 **/
  qlonglong quantity;

/**
 * @brief 商家编码
 **/
  QString skuNumber;

/**
 * @brief 采购基准价
 **/
  QString standardPrice;

};

#endif  /* FENXIAOPRODUCTSKUUPDATEREQUEST_H */
