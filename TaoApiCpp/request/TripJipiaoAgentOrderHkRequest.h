#ifndef TRIPJIPIAOAGENTORDERHKREQUEST_H
#define TRIPJIPIAOAGENTORDERHKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderHkResponse.h>

/**
 * TOP API: 国内机票代理商手工hk订单（未付款前，手工填写pnr）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderHkRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 QString getPnrInfo() const
;  void setPnrInfo (QString pnrInfo);


  virtual TripJipiaoAgentOrderHkResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 国内机票订单id
 **/
  qlonglong orderId;

/**
 * @brief hk（占座）时需要的信息信息列表，元素结构：乘机人姓名;pnr (以分号进行分隔).
 **/
  QString pnrInfo;

};

#endif  /* TRIPJIPIAOAGENTORDERHKREQUEST_H */
