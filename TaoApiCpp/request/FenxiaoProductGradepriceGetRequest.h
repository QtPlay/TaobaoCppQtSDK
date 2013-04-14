#ifndef FENXIAOPRODUCTGRADEPRICEGETREQUEST_H
#define FENXIAOPRODUCTGRADEPRICEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductGradepriceGetResponse.h>

/**
 * TOP API: 等级折扣查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductGradepriceGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 qlonglong getSkuId() const
;  void setSkuId (qlonglong skuId);

 qlonglong getTradeType() const
;  void setTradeType (qlonglong tradeType);


  virtual FenxiaoProductGradepriceGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品id
 **/
  qlonglong productId;

/**
 * @brief skuId
 **/
  qlonglong skuId;

/**
 * @brief 经、代销模式（1：代销、2：经销）
 **/
  qlonglong tradeType;

};

#endif  /* FENXIAOPRODUCTGRADEPRICEGETREQUEST_H */
