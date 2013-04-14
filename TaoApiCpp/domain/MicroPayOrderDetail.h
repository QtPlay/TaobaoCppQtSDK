#ifndef MICROPAYORDERDETAIL_H
#define MICROPAYORDERDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 小额支付冻结订单详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicroPayOrderDetail : public TaoDomain
{

public:
 virtual ~MicroPayOrderDetail() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);
  QString getAlipayUserId() const;
  void setAlipayUserId (QString alipayUserId);
  QString getAvailableAmount() const;
  void setAvailableAmount (QString availableAmount);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getExpireTime() const;
  void setExpireTime (QDateTime expireTime);
  QString getFreezeAmount() const;
  void setFreezeAmount (QString freezeAmount);
  QString getMemo() const;
  void setMemo (QString memo);
  QString getMerchantOrderNo() const;
  void setMerchantOrderNo (QString merchantOrderNo);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);
  QString getPayAmount() const;
  void setPayAmount (QString payAmount);
  QString getPayConfirm() const;
  void setPayConfirm (QString payConfirm);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝订单号，此订单号作为后续支付冻结金以及转账的订单标识
 **/
  QString alipayOrderNo;

/**
 * @brief 支付方的支付宝userId
 **/
  QString alipayUserId;

/**
 * @brief 可用于支付的金额（除去服务费）
 **/
  QString availableAmount;

/**
 * @brief 订单创建时间
 **/
  QDateTime createTime;

/**
 * @brief 冻结资金的到期自动解冻时间
 **/
  QDateTime expireTime;

/**
 * @brief 冻结金额（不包含服务费）
 **/
  QString freezeAmount;

/**
 * @brief 备注
 **/
  QString memo;

/**
 * @brief 商户订单号,这个是调用传入的
 **/
  QString merchantOrderNo;

/**
 * @brief 订单的最近修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 订单状态：I：初始，S：成功
 **/
  QString orderStatus;

/**
 * @brief 支付的金额（含服务费）
 **/
  QString payAmount;

/**
 * @brief 冻结资金支付确认方式，  
NO_CONFIRM：不需要付款确认，调用接口直接扣款 
PAY_PASSWORD: 
在转账需要付款方用支付密码确认，才可以转账成功
 **/
  QString payConfirm;

};

#endif  /* MICROPAYORDERDETAIL_H */
