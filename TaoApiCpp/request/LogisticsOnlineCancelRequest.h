#ifndef LOGISTICSONLINECANCELREQUEST_H
#define LOGISTICSONLINECANCELREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOnlineCancelResponse.h>

/**
 * TOP API: 调此接口取消发货的订单，重新选择物流公司发货。前提是物流公司未揽收货物。对未发货和已经被物流公司揽收的物流订单，是不能取消的。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOnlineCancelRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual LogisticsOnlineCancelResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 淘宝交易ID
 **/
  qlonglong tid;

};

#endif  /* LOGISTICSONLINECANCELREQUEST_H */
