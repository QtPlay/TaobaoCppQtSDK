#ifndef LOGISTICSORDERCANCELRESPONSE_H
#define LOGISTICSORDERCANCELRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/CancelOrderResult.h>


/**
 * @brief TOP RESPONSE API: 运单发货后，客户或者系统需要撤销运单时，调用撤销接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderCancelResponse : public TaoResponse
{
public:
 virtual ~LogisticsOrderCancelResponse() { }

  CancelOrderResult getCancelOrderResult() const;
  void setCancelOrderResult (CancelOrderResult cancelOrderResult);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 撤销物流订单结果
 **/
  CancelOrderResult cancelOrderResult;

};

#endif
