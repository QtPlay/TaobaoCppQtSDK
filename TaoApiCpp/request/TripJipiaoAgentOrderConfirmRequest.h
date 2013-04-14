#ifndef TRIPJIPIAOAGENTORDERCONFIRMREQUEST_H
#define TRIPJIPIAOAGENTORDERCONFIRMREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderConfirmResponse.h>

/**
 * TOP API: 国内机票代理商确认订单接口
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderConfirmRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 QString getPnrInfo() const
;  void setPnrInfo (QString pnrInfo);


  virtual TripJipiaoAgentOrderConfirmResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 国内机票订单id
 **/
  qlonglong orderId;

/**
 * @brief hk（占座）时需要的信息列表，元素结构：乘机人姓名;pnr (以分号进行分隔)
 **/
  QString pnrInfo;

};

#endif  /* TRIPJIPIAOAGENTORDERCONFIRMREQUEST_H */
