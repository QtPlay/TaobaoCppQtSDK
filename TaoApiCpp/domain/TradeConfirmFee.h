#ifndef TRADECONFIRMFEE_H
#define TRADECONFIRMFEE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 确认收货费用结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeConfirmFee : public TaoDomain
{

public:
 virtual ~TradeConfirmFee() { }

  QString getConfirmFee() const;
  void setConfirmFee (QString confirmFee);
  QString getConfirmPostFee() const;
  void setConfirmPostFee (QString confirmPostFee);
  bool getIsLastOrder() const;
  void setIsLastOrder (bool isLastOrder);
  
  virtual void parseResponse();

private:
/**
 * @brief 确认收货的金额(不包含邮费)。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString confirmFee;

/**
 * @brief 需确认收货的邮费，当不是最后一笔收货或者没有邮费时是0.00。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString confirmPostFee;

/**
 * @brief 是否是最后一笔订单（只对子订单有效，当其他子订单都是交易完成时，返回true，否则false）
 **/
  bool isLastOrder;

};

#endif  /* TRADECONFIRMFEE_H */
