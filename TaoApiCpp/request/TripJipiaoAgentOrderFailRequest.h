#ifndef TRIPJIPIAOAGENTORDERFAILREQUEST_H
#define TRIPJIPIAOAGENTORDERFAILREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderFailResponse.h>

/**
 * TOP API: 国内机票代理商失败订单接口
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderFailRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFailMemo() const
;  void setFailMemo (QString failMemo);

 qlonglong getFailType() const
;  void setFailType (qlonglong failType);

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);


  virtual TripJipiaoAgentOrderFailResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 失败类型为0，说明备注原因
 **/
  QString failMemo;

/**
 * @brief 失败原因：1．客户要求失败订单；2．此舱位已售完（经济舱或特舱）；3．剩余座位少于用户购买数量；4．特价管理里录入的特价票已经售完；5．假舱（请及时通过旺旺或者电话反馈给淘宝工作人员）；0．其它（请在备注中说明原因）
 **/
  qlonglong failType;

/**
 * @brief 国内机票订单id
 **/
  qlonglong orderId;

};

#endif  /* TRIPJIPIAOAGENTORDERFAILREQUEST_H */
