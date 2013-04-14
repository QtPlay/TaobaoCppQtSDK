#ifndef TRADERECEIVETIMEDELAYREQUEST_H
#define TRADERECEIVETIMEDELAYREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeReceivetimeDelayResponse.h>

/**
 * TOP API: 延长交易收货时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeReceivetimeDelayRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getDays() const
;  void setDays (qlonglong days);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeReceivetimeDelayResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 延长收货的天数，可选值为：3, 5, 7, 10。
 **/
  qlonglong days;

/**
 * @brief 主订单号
 **/
  qlonglong tid;

};

#endif  /* TRADERECEIVETIMEDELAYREQUEST_H */
