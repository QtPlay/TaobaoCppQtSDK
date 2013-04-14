#ifndef TRADEAMOUNT_H
#define TRADEAMOUNT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/OrderAmount.h>
#include <TaoApiCpp/domain/PromotionDetail.h>


/**
 * @brief 交易订单的帐务信息详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeAmount : public TaoDomain
{

public:
 virtual ~TradeAmount() { }

  QString getAlipayNo() const;
  void setAlipayNo (QString alipayNo);
  QString getBuyerCodFee() const;
  void setBuyerCodFee (QString buyerCodFee);
  qlonglong getBuyerObtainPointFee() const;
  void setBuyerObtainPointFee (qlonglong buyerObtainPointFee);
  QString getCodFee() const;
  void setCodFee (QString codFee);
  QString getCommissionFee() const;
  void setCommissionFee (QString commissionFee);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  QString getExpressAgencyFee() const;
  void setExpressAgencyFee (QString expressAgencyFee);
  QList<OrderAmount> getOrderAmounts() const;
  void setOrderAmounts (QList<OrderAmount> orderAmounts);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  QString getPayment() const;
  void setPayment (QString payment);
  QString getPostFee() const;
  void setPostFee (QString postFee);
  QList<PromotionDetail> getPromotionDetails() const;
  void setPromotionDetails (QList<PromotionDetail> promotionDetails);
  QString getSellerCodFee() const;
  void setSellerCodFee (QString sellerCodFee);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝交易号，如：2009112081173831
 **/
  QString alipayNo;

/**
 * @brief 买家货到付款服务费。精确到2位小数;单位:元。如:12.07，表示:12元7分
 **/
  QString buyerCodFee;

/**
 * @brief 买家获得积分,返点的积分。格式:100;单位:个
 **/
  qlonglong buyerObtainPointFee;

/**
 * @brief 货到付款服务费。精确到2位小数;单位:元。如:12.07，表示:12元7分
 **/
  QString codFee;

/**
 * @brief 交易佣金。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString commissionFee;

/**
 * @brief 交易创建时间
 **/
  QDateTime created;

/**
 * @brief 交易成功时间(更新交易状态为成功的同时更新)/确认收货时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime endTime;

/**
 * @brief 快递代收款。精确到2位小数;单位:元。如:212.07，表示:212元7分
 **/
  QString expressAgencyFee;

/**
 * @brief 子订单的帐务金额详情列表
 **/
  QList<OrderAmount> orderAmounts;

/**
 * @brief 付款时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime payTime;

/**
 * @brief 主订单实付金额。精确到2位小数;单位:元。如:200.07，表示:200元7分，计算公式如下： 
如果主订单只有一笔子订单 payment = 子订单的实付金额 + 货到付款服务费(如果是货到付款订单) - 主订单的系统级优惠；如果主订单有多笔子订单 payment = 各子订单的实付金额之和 + 货到付款服务费(如果是货到付款订单) + 邮费 - 主订单的系统级优惠
 **/
  QString payment;

/**
 * @brief 邮费。精确到2位小数;单位:元。如:200.07，表示:200元7分。目前只提供整笔交易的邮费，暂不提供各子订单的邮费
 **/
  QString postFee;

/**
 * @brief 主交易订单的系统级优惠详情
 **/
  QList<PromotionDetail> promotionDetails;

/**
 * @brief 卖家货到付款服务费。精确到2位小数;单位:元。如:12.07，表示:12元7分
 **/
  QString sellerCodFee;

/**
 * @brief 交易主订单编号
 **/
  qlonglong tid;

/**
 * @brief 主订单的商品金额（各子订单中商品price * num的和，不包括任何优惠信息）。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString totalFee;

};

#endif  /* TRADEAMOUNT_H */
