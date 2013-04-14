#ifndef ITEMQUANTITYUPDATEREQUEST_H
#define ITEMQUANTITYUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemQuantityUpdateResponse.h>

/**
 * TOP API: 提供按照全量或增量形式修改宝贝/SKU库存的功能
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemQuantityUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 qlonglong getQuantity() const
;  void setQuantity (qlonglong quantity);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);

 qlonglong getType() const
;  void setType (qlonglong type);


  virtual ItemQuantityUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品数字ID，必填参数
 **/
  qlonglong numIid;

/**
 * @brief SKU的商家编码，可选参数。如果不填则默认修改宝贝的库存，如果填了则按照商家编码搜索出对应的SKU并修改库存。当sku_id和本字段都填写时以sku_id为准搜索对应SKU
 **/
  QString outerId;

/**
 * @brief 库存修改值，必选。当全量更新库存时，quantity必须为大于等于0的正整数；当增量更新库存时，quantity为整数，可小于等于0。若增量更新时传入的库存为负数，则负数与实际库存之和不能小于0。比如当前实际库存为1，传入增量更新quantity=-1，库存改为0
 **/
  qlonglong quantity;

/**
 * @brief 要操作的SKU的数字ID，可选。如果不填默认修改宝贝的库存，如果填上则修改该SKU的库存
 **/
  qlonglong skuId;

/**
 * @brief 库存更新方式，可选。1为全量更新，2为增量更新。如果不填，默认为全量更新
 **/
  qlonglong type;

};

#endif  /* ITEMQUANTITYUPDATEREQUEST_H */
