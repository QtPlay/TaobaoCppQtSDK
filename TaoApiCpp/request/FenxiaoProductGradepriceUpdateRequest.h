#ifndef FENXIAOPRODUCTGRADEPRICEUPDATEREQUEST_H
#define FENXIAOPRODUCTGRADEPRICEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductGradepriceUpdateResponse.h>

/**
 * TOP API: 供应商可以针对产品不同的sku，指定对应交易类型（代销or经销）方式下，设定折扣方式（按等级or指定分销商）以及对应优惠后的采购价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductGradepriceUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getIds() const
;  void setIds (qlonglong ids);

 QString getPrices() const
;  void setPrices (QString prices);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);

 QString getTargetType() const
;  void setTargetType (QString targetType);

 QString getTradeType() const
;  void setTradeType (QString tradeType);


  virtual FenxiaoProductGradepriceUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 会员等级的id或者分销商id，例如：”1001,2001,1002”
 **/
  qlonglong ids;

/**
 * @brief 优惠价格,大小为0到100000000之间的整数或两位小数，例：优惠价格为：100元2角5分，传入的参数应写成：100.25
 **/
  QString prices;

/**
 * @brief 产品Id
 **/
  qlonglong productId;

/**
 * @brief skuId，如果产品有skuId,必须要输入skuId;没有skuId的时候不必选
 **/
  qlonglong skuId;

/**
 * @brief 选择折扣方式：GRADE（按等级进行设置）;DISCITUTOR(按分销商进行设置）。例如"GRADE,DISTRIBUTOR"
 **/
  QString targetType;

/**
 * @brief 交易类型： AGENT(代销)、DEALER(经销)，ALL(代销和经销)
 **/
  QString tradeType;

};

#endif  /* FENXIAOPRODUCTGRADEPRICEUPDATEREQUEST_H */
