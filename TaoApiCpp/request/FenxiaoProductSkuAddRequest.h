#ifndef FENXIAOPRODUCTSKUADDREQUEST_H
#define FENXIAOPRODUCTSKUADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductSkuAddResponse.h>

/**
 * TOP API: 添加产品SKU信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductSkuAddRequest : public TaoRequest
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


  virtual FenxiaoProductSkuAddResponse *getResponseClass(const QString &session = "",
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
 * @brief sku产品库存，在0到1000000之间，如果不传，则库存为0
 **/
  qlonglong quantity;

/**
 * @brief 商家编码
 **/
  QString skuNumber;

/**
 * @brief 采购基准价，最大值1000000000
 **/
  QString standardPrice;

};

#endif  /* FENXIAOPRODUCTSKUADDREQUEST_H */
