#ifndef LOGISTICSORDERCANCELREQUEST_H
#define LOGISTICSORDERCANCELREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOrderCancelResponse.h>

/**
 * TOP API: 运单发货后，客户或者系统需要撤销运单时，调用撤销接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderCancelRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 QString getReason() const
;  void setReason (QString reason);


  virtual LogisticsOrderCancelResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流订单id
 **/
  qlonglong orderId;

/**
 * @brief 撤销原因说明。
 **/
  QString reason;

};

#endif  /* LOGISTICSORDERCANCELREQUEST_H */
