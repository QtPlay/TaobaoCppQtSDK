#ifndef TRIPJIPIAOAGENTORDERSPECIALCONFIRMREQUEST_H
#define TRIPJIPIAOAGENTORDERSPECIALCONFIRMREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderSpecialConfirmResponse.h>

/**
 * TOP API: 国内机票订单接口，确认特殊产品能否支付
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderSpecialConfirmRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getCanPay() const
;  void setCanPay (bool canPay);

 QString getFailMemo() const
;  void setFailMemo (QString failMemo);

 qlonglong getFailType() const
;  void setFailType (qlonglong failType);

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 QDateTime getPayLatestTime() const
;  void setPayLatestTime (QDateTime payLatestTime);


  virtual TripJipiaoAgentOrderSpecialConfirmResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 能否支付
 **/
  bool canPay;

/**
 * @brief can_pay=false,fail_type=0时，必需提供失败原因
 **/
  QString failMemo;

/**
 * @brief can_pay=false时，必需提供失败原因；失败原因：11,座位已售完;12,座位申请不成功;13,航班价格变动;14,买家要求失败订单;0,其它(必须在备注中说明原因)
 **/
  qlonglong failType;

/**
 * @brief 国内机票订单id
 **/
  qlonglong orderId;

/**
 * @brief can_pay=true，必需提供最迟支付时间
 **/
  QDateTime payLatestTime;

};

#endif  /* TRIPJIPIAOAGENTORDERSPECIALCONFIRMREQUEST_H */
