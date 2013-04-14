#ifndef INVENTORYQUERYREQUEST_H
#define INVENTORYQUERYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/InventoryQueryResponse.h>

/**
 * TOP API: 商家查询商品总体库存信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryQueryRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getScItemCodes() const
;  void setScItemCodes (QString scItemCodes);

 QString getScItemIds() const
;  void setScItemIds (QString scItemIds);

 QString getSellerNick() const
;  void setSellerNick (QString sellerNick);

 QString getStoreCodes() const
;  void setStoreCodes (QString storeCodes);


  virtual InventoryQueryResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 后端商品的商家编码列表，控制到50个
 **/
  QString scItemCodes;

/**
 * @brief 后端商品ID 列表，控制到50个
 **/
  QString scItemIds;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 仓库列表:GLY001^GLY002
 **/
  QString storeCodes;

};

#endif  /* INVENTORYQUERYREQUEST_H */
