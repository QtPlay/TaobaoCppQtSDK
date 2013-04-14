#ifndef EBPPBILLGETRESPONSE_H
#define EBPPBILLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 查询生活账单信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EbppBillGetResponse : public TaoResponse
{
public:
 virtual ~EbppBillGetResponse() { }

  QString getAlipayOrderNo() const;
  void setAlipayOrderNo (QString alipayOrderNo);  QString getBillDate() const;
  void setBillDate (QString billDate);  QString getBillKey() const;
  void setBillKey (QString billKey);  QString getChargeInst() const;
  void setChargeInst (QString chargeInst);  QString getChargeInstName() const;
  void setChargeInstName (QString chargeInstName);  QString getMerchantOrderNo() const;
  void setMerchantOrderNo (QString merchantOrderNo);  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);  QString getOrderType() const;
  void setOrderType (QString orderType);  QString getOwnerName() const;
  void setOwnerName (QString ownerName);  QString getPayAmount() const;
  void setPayAmount (QString payAmount);  QString getServiceAmount() const;
  void setServiceAmount (QString serviceAmount);  QString getSubOrderType() const;
  void setSubOrderType (QString subOrderType);  QString getTrafficLocation() const;
  void setTrafficLocation (QString trafficLocation);  QString getTrafficRegulations() const;
  void setTrafficRegulations (QString trafficRegulations);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付宝的业务订单号，具有唯一性。
 **/
  QString alipayOrderNo;

/**
 * @brief 账单的账期，例如201203表示2012年3月的账单。
 **/
  QString billDate;

/**
 * @brief 账单单据号，例如水费单号，手机号，电费号，信用卡卡号。没有唯一性要求。
 **/
  QString billKey;

/**
 * @brief 支付宝给每个出账机构指定了一个对应的英文短名称来唯一表示该收费单位。
 **/
  QString chargeInst;

/**
 * @brief 出账机构中文名称。
 **/
  QString chargeInstName;

/**
 * @brief 输出机构的业务流水号，需要保证唯一性。
 **/
  QString merchantOrderNo;

/**
 * @brief 账单的状态。 INIT:等待付款，SUCCESS:成功,FAILED:失败。
 **/
  QString orderStatus;

/**
 * @brief 支付宝订单类型。公共事业缴纳JF,信用卡还款HK
 **/
  QString orderType;

/**
 * @brief 拥有该账单的用户姓名
 **/
  QString ownerName;

/**
 * @brief 缴费金额。用户支付的总金额。单位为：RMB Yuan。取值范围为[0.01，100000000.00]，精确到小数点后两位。
 **/
  QString payAmount;

/**
 * @brief 账单的服务费
 **/
  QString serviceAmount;

/**
 * @brief 子业务类型是业务类型的下一级概念，例如：WATER表示JF下面的水费，ELECTRIC表示JF下面的电费，GAS表示JF下面的燃气费。
 **/
  QString subOrderType;

/**
 * @brief 交通违章地点，sub_order_type=TRAFFIC时有值
 **/
  QString trafficLocation;

/**
 * @brief 违章行为，sub_order_type=TRAFFIC时有值。
 **/
  QString trafficRegulations;

};

#endif
