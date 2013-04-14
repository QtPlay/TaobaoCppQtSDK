#ifndef BASEINFO_H
#define BASEINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 国内机票，订单基本信息数据结构【top订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BaseInfo : public TaoDomain
{

public:
 virtual ~BaseInfo() { }

  QString getAccountNo() const;
  void setAccountNo (QString accountNo);
  QString getAlipayTradeNo() const;
  void setAlipayTradeNo (QString alipayTradeNo);
  qlonglong getBookWay() const;
  void setBookWay (qlonglong bookWay);
  QString getCommission() const;
  void setCommission (QString commission);
  QString getCommissionDiscount() const;
  void setCommissionDiscount (QString commissionDiscount);
  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QString getExtra() const;
  void setExtra (QString extra);
  QDateTime getModifyTime() const;
  void setModifyTime (QDateTime modifyTime);
  qlonglong getOrderId() const;
  void setOrderId (qlonglong orderId);
  QDateTime getPayLatestTime() const;
  void setPayLatestTime (QDateTime payLatestTime);
  qlonglong getPayStatus() const;
  void setPayStatus (qlonglong payStatus);
  QString getRelationEmail() const;
  void setRelationEmail (QString relationEmail);
  QString getRelationMobile() const;
  void setRelationMobile (QString relationMobile);
  QString getRelationName() const;
  void setRelationName (QString relationName);
  QString getRelationPhoneBak() const;
  void setRelationPhoneBak (QString relationPhoneBak);
  qlonglong getRelativeOrderId() const;
  void setRelativeOrderId (qlonglong relativeOrderId);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  qlonglong getTotalPrice() const;
  void setTotalPrice (qlonglong totalPrice);
  qlonglong getTripType() const;
  void setTripType (qlonglong tripType);
  
  virtual void parseResponse();

private:
/**
 * @brief 买家支付宝帐号
 **/
  QString accountNo;

/**
 * @brief 支付宝交易号
 **/
  QString alipayTradeNo;

/**
 * @brief 订单出票方式==> 1:手工hk;2:自动出票;3:自动hk手工出票
 **/
  qlonglong bookWay;

/**
 * @brief 佣金，单位：分
 **/
  QString commission;

/**
 * @brief 佣金比率
 **/
  QString commissionDiscount;

/**
 * @brief 订单创建时间
 **/
  QDateTime createTime;

/**
 * @brief 扩展信息
 **/
  QString extra;

/**
 * @brief 订单表最近一次修改时间
 **/
  QDateTime modifyTime;

/**
 * @brief 订单淘宝唯一主键
 **/
  qlonglong orderId;

/**
 * @brief 订单最晚支付时间
 **/
  QDateTime payLatestTime;

/**
 * @brief 订单支付状态==> 0:未付款;1:已付款，冻结买家定金;2:付款给卖家;3:解冻定金给买家;4:已扣佣;5:交易关闭;6:确认可支付;7:确认不可支付
 **/
  qlonglong payStatus;

/**
 * @brief 联系人邮箱
 **/
  QString relationEmail;

/**
 * @brief 联系人手机号
 **/
  QString relationMobile;

/**
 * @brief 联系人姓名
 **/
  QString relationName;

/**
 * @brief 联系人备用电话
 **/
  QString relationPhoneBak;

/**
 * @brief 关联订单号，普通往返另一程订单号，仅两程订单为同一个代理商时提供
 **/
  qlonglong relativeOrderId;

/**
 * @brief 订单状态定义==> 0:未付款;1:处理中;2:确定出票;3:预定成功;4:预定失败;5:处理中超时失效;6:支付超时失效;7:买家取消
 **/
  qlonglong status;

/**
 * @brief 总金额，所有乘机人加机建燃油，单位：分
 **/
  qlonglong totalPrice;

/**
 * @brief 航程类型：0，单程；1，普通往返；2，多程（暂时没有使用）；3，特价往返
 **/
  qlonglong tripType;

};

#endif  /* BASEINFO_H */
