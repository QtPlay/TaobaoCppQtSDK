#ifndef BILL_H
#define BILL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 账单结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Bill : public TaoDomain
{

public:
 virtual ~Bill() { }

  qlonglong getAccountId() const;
  void setAccountId (qlonglong accountId);
  QString getAlipayId() const;
  void setAlipayId (QString alipayId);
  QString getAlipayMail() const;
  void setAlipayMail (QString alipayMail);
  QString getAlipayNo() const;
  void setAlipayNo (QString alipayNo);
  QString getAlipayNotice() const;
  void setAlipayNotice (QString alipayNotice);
  QString getAlipayOutno() const;
  void setAlipayOutno (QString alipayOutno);
  qlonglong getAmount() const;
  void setAmount (qlonglong amount);
  qlonglong getBid() const;
  void setBid (qlonglong bid);
  QDateTime getBizTime() const;
  void setBizTime (QDateTime bizTime);
  QDateTime getBookTime() const;
  void setBookTime (QDateTime bookTime);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  QString getGmtModified() const;
  void setGmtModified (QString gmtModified);
  QString getNumIid() const;
  void setNumIid (QString numIid);
  QString getObjAlipayId() const;
  void setObjAlipayId (QString objAlipayId);
  QString getObjAlipayMail() const;
  void setObjAlipayMail (QString objAlipayMail);
  QString getOrderId() const;
  void setOrderId (QString orderId);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  qlonglong getTotalAmount() const;
  void setTotalAmount (qlonglong totalAmount);
  QString getTradeId() const;
  void setTradeId (QString tradeId);
  
  virtual void parseResponse();

private:
/**
 * @brief 科目编号
 **/
  qlonglong accountId;

/**
 * @brief 支付宝账户编号
 **/
  QString alipayId;

/**
 * @brief 支付宝账户名称
 **/
  QString alipayMail;

/**
 * @brief 支付宝交易号,暂不提供
 **/
  QString alipayNo;

/**
 * @brief 支付宝备注
 **/
  QString alipayNotice;

/**
 * @brief 支付宝商户订单号
 **/
  QString alipayOutno;

/**
 * @brief 账单金额,退款时返回的是负数
 **/
  qlonglong amount;

/**
 * @brief 账单编号
 **/
  qlonglong bid;

/**
 * @brief 业务时间,订单交易完成的时间
 **/
  QDateTime bizTime;

/**
 * @brief 记账时间
 **/
  QDateTime bookTime;

/**
 * @brief 创建时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 修改时间
 **/
  QString gmtModified;

/**
 * @brief 所属商品编号
 **/
  QString numIid;

/**
 * @brief 目标支付宝账户编号
 **/
  QString objAlipayId;

/**
 * @brief 目标支付宝账户名称
 **/
  QString objAlipayMail;

/**
 * @brief 交易子订单编号
 **/
  QString orderId;

/**
 * @brief 支付时间,收取佣金时支付宝的扣款时间
 **/
  QDateTime payTime;

/**
 * @brief 0-未支付,1-支付成功,2-支付失败
 **/
  qlonglong status;

/**
 * @brief 交易金额
 **/
  qlonglong totalAmount;

/**
 * @brief 交易订单编号
 **/
  QString tradeId;

};

#endif  /* BILL_H */
