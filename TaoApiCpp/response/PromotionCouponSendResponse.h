#ifndef PROMOTIONCOUPONSENDRESPONSE_H
#define PROMOTIONCOUPONSENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/CouponResult.h>
#include <TaoApiCpp/domain/ErrorMessage.h>


/**
 * @brief TOP RESPONSE API: 通过接口批量发放店铺优惠券（每次只能发送100张），发送成功则返回为空，发送失败则返回失败的买家列表和发送成功的买家和优惠券的number。注：如果所有买家都发放失败的话，is_success也为true，建议调用者根据返回的集合判断是否送入的买家都发放成功了
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PromotionCouponSendResponse : public TaoResponse
{
public:
 virtual ~PromotionCouponSendResponse() { }

  QList<CouponResult> getCouponResults() const;
  void setCouponResults (QList<CouponResult> couponResults);  QList<ErrorMessage> getFailureBuyers() const;
  void setFailureBuyers (QList<ErrorMessage> failureBuyers);  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 发送成功的买家的昵称和优惠券的number
 **/
  QList<CouponResult> couponResults;

/**
 * @brief 没有发送成功的买家
 **/
  QList<ErrorMessage> failureBuyers;

/**
 * @brief true 成功，false失败
 **/
  bool isSuccess;

};

#endif
