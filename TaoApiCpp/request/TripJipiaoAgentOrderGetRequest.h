#ifndef TRIPJIPIAOAGENTORDERGETREQUEST_H
#define TRIPJIPIAOAGENTORDERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderGetResponse.h>

/**
 * TOP API: 根据淘宝系统订单号获取订单详情信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOrderIds() const
;  void setOrderIds (qlonglong orderIds);


  virtual TripJipiaoAgentOrderGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 淘宝政策id列表，当前支持列表长度为1，即当前只支持单个订单详情查询
 **/
  qlonglong orderIds;

};

#endif  /* TRIPJIPIAOAGENTORDERGETREQUEST_H */
