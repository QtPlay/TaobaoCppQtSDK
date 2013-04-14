#ifndef WLBINVENTORYSYNCREQUEST_H
#define WLBINVENTORYSYNCREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbInventorySyncResponse.h>

/**
 * TOP API: 将库存同步至IC
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventorySyncRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getItemType() const
;  void setItemType (QString itemType);

 qlonglong getQuantity() const
;  void setQuantity (qlonglong quantity);


  virtual WlbInventorySyncResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 外部实体类型.存如下值  
IC_ITEM --表示IC商品;  
IC_SKU --表示IC最小单位商品; 
WLB_ITEM  --表示WLB商品. 
若值不在范围内，则按WLB_ITEM处理
 **/
  QString itemType;

/**
 * @brief 库存数量
 **/
  qlonglong quantity;

};

#endif  /* WLBINVENTORYSYNCREQUEST_H */
