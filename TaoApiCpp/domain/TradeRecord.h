#ifndef TRADERECORD_H
#define TRADERECORD_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 支付宝交易明细
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeRecord : public TaoDomain
{

public:
 virtual ~TradeRecord() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QString getInOutType() const;
  void setInOutType (QString inOutType);
  QString getMerchantOrderNo() const;
  void setMerchantOrderNo (QString merchantOrderNo);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getOppositeLogonId() const;
  void setOppositeLogonId (QString oppositeLogonId);
  QString getOppositeName() const;
  void setOppositeName (QString oppositeName);
  QString getOppositeUserId() const;
  void setOppositeUserId (QString oppositeUserId);
  QString getOrderFrom() const;
  void setOrderFrom (QString orderFrom);
  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);
  QString getOrderTitle() const;
  void setOrderTitle (QString orderTitle);
  QString getOrderType() const;
  void setOrderType (QString orderType);
  QString getOwnerLogonId() const;
  void setOwnerLogonId (QString ownerLogonId);
  QString getOwnerName() const;
  void setOwnerName (QString ownerName);
  QString getOwnerUserId() const;
  void setOwnerUserId (QString ownerUserId);
  QString getServiceCharge() const;
  void setServiceCharge (QString serviceCharge);
  QString getTotalAmount() const;
  void setTotalAmount (QString totalAmount);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝订单号
 **/
  QString alipayOrderNo;

/**
 * @brief 订单创建时间
 **/
  QDateTime createTime;

/**
 * @brief 资金流入流程类型,in表示收入,out表示支出
 **/
  QString inOutType;

/**
 * @brief 商户订单号
 **/
  QString merchantOrderNo;

/**
 * @brief 订单最后修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 对方支付宝登录号，需要隐藏
 **/
  QString oppositeLogonId;

/**
 * @brief 对方姓名，需要隐藏
 **/
  QString oppositeName;

/**
 * @brief 对方支付宝账号
 **/
  QString oppositeUserId;

/**
 * @brief 订单来源，为空查询所有来源。淘宝(taobao)，支付宝(alipay)，其它(other)
 **/
  QString orderFrom;

/**
 * @brief 订单状态
 **/
  QString orderStatus;

/**
 * @brief 订单的名称，描述订单的摘要信息，如交易的商品名称
 **/
  QString orderTitle;

/**
 * @brief 订单类型
 **/
  QString orderType;

/**
 * @brief 本方支付宝登录号，需要隐藏
 **/
  QString ownerLogonId;

/**
 * @brief 本方姓名，需要隐藏
 **/
  QString ownerName;

/**
 * @brief 本方支付宝账号
 **/
  QString ownerUserId;

/**
 * @brief 订单服务费
 **/
  QString serviceCharge;

/**
 * @brief 订单总金额
 **/
  QString totalAmount;

};

#endif  /* TRADERECORD_H */
