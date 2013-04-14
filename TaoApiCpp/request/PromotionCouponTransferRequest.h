#ifndef PROMOTIONCOUPONTRANSFERREQUEST_H
#define PROMOTIONCOUPONTRANSFERREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionCouponTransferResponse.h>

/**
 * TOP API: 买家可以将自己“未使用”状态下的优惠券转发给任意淘宝用户。 
只能转发“未使用”状态下的优惠券
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponTransferRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCouponNumber() const
;  void setCouponNumber (qlonglong couponNumber);

 QString getReceiveingBuyerName() const
;  void setReceiveingBuyerName (QString receiveingBuyerName);


  virtual PromotionCouponTransferResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 优惠券编号
 **/
  qlonglong couponNumber;

/**
 * @brief 要赠送的淘宝昵称
 **/
  QString receiveingBuyerName;

};

#endif  /* PROMOTIONCOUPONTRANSFERREQUEST_H */
