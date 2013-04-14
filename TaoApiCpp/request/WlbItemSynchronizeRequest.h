#ifndef WLBITEMSYNCHRONIZEREQUEST_H
#define WLBITEMSYNCHRONIZEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemSynchronizeResponse.h>

/**
 * TOP API: 同步仓储商品与前台商品，建立仓储商品与前台商品的关系,并更新IC中的信息到仓储商品Item中
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemSynchronizeRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getExtEntityId() const
;  void setExtEntityId (qlonglong extEntityId);

 QString getExtEntityType() const
;  void setExtEntityType (QString extEntityType);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getUserNick() const
;  void setUserNick (QString userNick);


  virtual WlbItemSynchronizeResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 外部实体ID
 **/
  qlonglong extEntityId;

/**
 * @brief 外部实体类型.存如下值 
IC_ITEM   --表示IC商品 
IC_SKU    --表示IC最小单位商品 
若输入其他值，则按IC_ITEM处理
 **/
  QString extEntityType;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 商品所有人淘宝nick
 **/
  QString userNick;

};

#endif  /* WLBITEMSYNCHRONIZEREQUEST_H */
