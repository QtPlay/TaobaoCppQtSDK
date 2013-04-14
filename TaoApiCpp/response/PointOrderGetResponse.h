#ifndef POINTORDERGETRESPONSE_H
#define POINTORDERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 查询集分宝发放详情，发放API是alipay.point.order.add。请先熟悉发放API的流程。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PointOrderGetResponse : public TaoResponse
{
public:
 virtual ~PointOrderGetResponse() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);  QString getDispatchUserId() const;
  void setDispatchUserId (QString dispatchUserId);  QString getMemo() const;
  void setMemo (QString memo);  QString getMerchantOrderNo() const;
  void setMerchantOrderNo (QString merchantOrderNo);  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);  qlonglong getPointCount() const;
  void setPointCount (qlonglong pointCount);  QString getReceiveUserId() const;
  void setReceiveUserId (QString receiveUserId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付宝集分宝发放流水号
 **/
  QString alipayOrderNo;

/**
 * @brief 发放时间，格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime createTime;

/**
 * @brief 支付宝集分宝发放者用户ID
 **/
  QString dispatchUserId;

/**
 * @brief 向用户展示集分宝发放备注
 **/
  QString memo;

/**
 * @brief isv提供的发放号订单号，由数字和字母组成，最大长度为32为，需要保证每笔发放的唯一性，支付宝会对该参数做唯一性控制。如果使用同样的订单号，支付宝将返回订单号已经存在的错误
 **/
  QString merchantOrderNo;

/**
 * @brief 集分宝发放流水状态，I表示处理中，S表示成功，F表示失败
 **/
  QString orderStatus;

/**
 * @brief 发放集分宝的数量
 **/
  qlonglong pointCount;

/**
 * @brief 支付宝集分宝接收者用户ID
 **/
  QString receiveUserId;

};

#endif
