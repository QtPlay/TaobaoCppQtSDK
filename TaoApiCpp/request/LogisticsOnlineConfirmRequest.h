#ifndef LOGISTICSONLINECONFIRMREQUEST_H
#define LOGISTICSONLINECONFIRMREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOnlineConfirmResponse.h>

/**
 * TOP API: 确认发货的目的是让交易流程继承走下去，确认发货后交易状态会由【买家已付款】变为【卖家已发货】，然后买家才可以确认收货，货款打入卖家账号。货到付款的订单除外
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOnlineConfirmRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getOutSid() const
;  void setOutSid (QString outSid);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual LogisticsOnlineConfirmResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 运单号.具体一个物流公司的真实运单号码。淘宝官方物流会校验，请谨慎传入；若company_code中传入的代码非淘宝官方物流合作公司，此处运单号不校验。<br>
 **/
  QString outSid;

/**
 * @brief 淘宝交易ID
 **/
  qlonglong tid;

};

#endif  /* LOGISTICSONLINECONFIRMREQUEST_H */
