#ifndef SINGLEPAYDETAIL_H
#define SINGLEPAYDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 小额支付单笔支付
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SinglePayDetail : public TaoDomain
{

public:
 virtual ~SinglePayDetail() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);
  QString getAmount() const;
  void setAmount (QString amount);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getPayUrl() const;
  void setPayUrl (QString payUrl);
  QString getReceiveUserId() const;
  void setReceiveUserId (QString receiveUserId);
  QString getTransferOrderNo() const;
  void setTransferOrderNo (QString transferOrderNo);
  QString getTransferOutOrderNo() const;
  void setTransferOutOrderNo (QString transferOutOrderNo);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝冻结订单号
 **/
  QString alipayOrderNo;

/**
 * @brief 本次支付金额
 **/
  QString amount;

/**
 * @brief 创建时间
 **/
  QDateTime createTime;

/**
 * @brief 最近修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 本次支付url地址
 **/
  QString payUrl;

/**
 * @brief 收款人的userId
 **/
  QString receiveUserId;

/**
 * @brief 本次支付的支付宝流水号
 **/
  QString transferOrderNo;

/**
 * @brief 本次支付的外部单据号
 **/
  QString transferOutOrderNo;

};

#endif  /* SINGLEPAYDETAIL_H */
