#ifndef CANCELORDERRESULT_H
#define CANCELORDERRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 撤销运单结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CancelOrderResult : public TaoDomain
{

public:
 virtual ~CancelOrderResult() { }

  qlonglong getRecreateOrderId() const;
  void setRecreateOrderId (qlonglong recreateOrderId);
  
  virtual void parseResponse();

private:
/**
 * @brief 撤销后重新创建的订单的订单号
 **/
  qlonglong recreateOrderId;

};

#endif  /* CANCELORDERRESULT_H */
