#ifndef FENXIAOPRODUCTMAPADDREQUEST_H
#define FENXIAOPRODUCTMAPADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductMapAddResponse.h>

/**
 * TOP API: 创建分销和供应链商品映射关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductMapAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getNotCheckOuterCode() const
;  void setNotCheckOuterCode (bool notCheckOuterCode);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 qlonglong getScItemId() const
;  void setScItemId (qlonglong scItemId);

 QString getScItemIds() const
;  void setScItemIds (QString scItemIds);

 QString getSkuIds() const
;  void setSkuIds (QString skuIds);


  virtual FenxiaoProductMapAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否需要校验商家编码，true不校验，false校验。
 **/
  bool notCheckOuterCode;

/**
 * @brief 分销产品id。
 **/
  qlonglong productId;

/**
 * @brief 后端商品id（如果当前分销产品没有sku和后端商品时需要指定）。
 **/
  qlonglong scItemId;

/**
 * @brief 在有sku的情况下，与各个sku对应的后端商品id列表。逗号分隔，顺序需要保证与sku_ids一致。
 **/
  QString scItemIds;

/**
 * @brief 分销产品的sku id。逗号分隔，顺序需要保证与sc_item_ids一致（没有sku就不传）。
 **/
  QString skuIds;

};

#endif  /* FENXIAOPRODUCTMAPADDREQUEST_H */
