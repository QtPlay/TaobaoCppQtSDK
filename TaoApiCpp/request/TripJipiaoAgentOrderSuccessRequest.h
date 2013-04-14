#ifndef TRIPJIPIAOAGENTORDERSUCCESSREQUEST_H
#define TRIPJIPIAOAGENTORDERSUCCESSREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentOrderSuccessResponse.h>

/**
 * TOP API: 淘宝机票代理商成功/解冻订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderSuccessRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 QString getSuccessInfo() const
;  void setSuccessInfo (QString successInfo);


  virtual TripJipiaoAgentOrderSuccessResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 淘宝系统订单id
 **/
  qlonglong orderId;

/**
 * @brief 成功订单参数：列表元素结构为——旧乘机人姓名;新乘机人姓名;pnr;票号 (以分号进行分隔)。说明：有时用户输入的乘机人姓名输入错误或者有生僻字，代理商必须输入新的名字以保证验真通过；即旧乘机人姓名和新乘机人姓名不需要变化时可以相同
 **/
  QString successInfo;

};

#endif  /* TRIPJIPIAOAGENTORDERSUCCESSREQUEST_H */
