#ifndef PROMOTIONCOUPONSENDREQUEST_H
#define PROMOTIONCOUPONSENDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/PromotionCouponSendResponse.h>

/**
 * TOP API: 通过接口批量发放店铺优惠券（每次只能发送100张），发送成功则返回为空，发送失败则返回失败的买家列表和发送成功的买家和优惠券的number。注：如果所有买家都发放失败的话，is_success也为true，建议调用者根据返回的集合判断是否送入的买家都发放成功了
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponSendRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBuyerNick() const
;  void setBuyerNick (QString buyerNick);

 qlonglong getCouponId() const
;  void setCouponId (qlonglong couponId);


  virtual PromotionCouponSendResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 买家昵称用半角','号分割
 **/
  QString buyerNick;

/**
 * @brief 优惠券的id
 **/
  qlonglong couponId;

};

#endif  /* PROMOTIONCOUPONSENDREQUEST_H */
