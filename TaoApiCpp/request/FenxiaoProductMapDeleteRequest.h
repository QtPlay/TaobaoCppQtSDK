#ifndef FENXIAOPRODUCTMAPDELETEREQUEST_H
#define FENXIAOPRODUCTMAPDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductMapDeleteResponse.h>

/**
 * TOP API: 删除分销和供应链商品映射关系。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductMapDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getSkuIds() const
;  void setSkuIds (QString skuIds);


  virtual FenxiaoProductMapDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 分销产品id。
 **/
  qlonglong productId;

/**
 * @brief 分销产品的sku id列表，逗号分隔，在有sku时需要指定。
 **/
  QString skuIds;

};

#endif  /* FENXIAOPRODUCTMAPDELETEREQUEST_H */
