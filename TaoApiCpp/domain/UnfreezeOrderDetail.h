#ifndef UNFREEZEORDERDETAIL_H
#define UNFREEZEORDERDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 冻结订单详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UnfreezeOrderDetail : public TaoDomain
{

public:
 virtual ~UnfreezeOrderDetail() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QString getMemo() const;
  void setMemo (QString memo);
  QString getMerchantOrderNo() const;
  void setMerchantOrderNo (QString merchantOrderNo);
  QDateTime getModifiedTime() const;
  void setModifiedTime (QDateTime modifiedTime);
  QString getOrderAmount() const;
  void setOrderAmount (QString orderAmount);
  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);
  QString getUnfreezeAmount() const;
  void setUnfreezeAmount (QString unfreezeAmount);
  
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
 * @brief 备注
 **/
  QString memo;

/**
 * @brief 冻结订单的商户订单号
 **/
  QString merchantOrderNo;

/**
 * @brief 订单的最近修改时间
 **/
  QDateTime modifiedTime;

/**
 * @brief 冻结金额（含服务费）
 **/
  QString orderAmount;

/**
 * @brief 订单状态：I：初始，S：成功，F：失败
 **/
  QString orderStatus;

/**
 * @brief 解冻金额（含服务费）
 **/
  QString unfreezeAmount;

};

#endif  /* UNFREEZEORDERDETAIL_H */
