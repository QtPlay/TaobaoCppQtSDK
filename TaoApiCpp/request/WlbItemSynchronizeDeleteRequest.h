#ifndef WLBITEMSYNCHRONIZEDELETEREQUEST_H
#define WLBITEMSYNCHRONIZEDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbItemSynchronizeDeleteResponse.h>

/**
 * TOP API: 通过物流宝商品ID和IC商品ID删除映射关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemSynchronizeDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getExtEntityId() const
;  void setExtEntityId (qlonglong extEntityId);

 QString getExtEntityType() const
;  void setExtEntityType (QString extEntityType);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);


  virtual WlbItemSynchronizeDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 外部实体ID
 **/
  qlonglong extEntityId;

/**
 * @brief 外部实体类型.存如下值 IC_ITEM --表示IC商品; IC_SKU --表示IC最小单位商品;若输入其他值，则按IC_ITEM处理
 **/
  QString extEntityType;

/**
 * @brief 物流宝商品ID
 **/
  qlonglong itemId;

};

#endif  /* WLBITEMSYNCHRONIZEDELETEREQUEST_H */
