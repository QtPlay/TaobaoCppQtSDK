#ifndef CONSIGNRESULT_H
#define CONSIGNRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 发货返回结果
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ConsignResult : public TaoDomain
{

public:
 virtual ~ConsignResult() { }

  QString getLogisticsId() const;
  void setLogisticsId (QString logisticsId);
  qlonglong getOrderId() const;
  void setOrderId (qlonglong orderId);
  
  virtual void parseResponse();

private:
/**
 * @brief 物流编号，作为业务标识字段。
 **/
  QString logisticsId;

/**
 * @brief 订单号
 **/
  qlonglong orderId;

};

#endif  /* CONSIGNRESULT_H */
