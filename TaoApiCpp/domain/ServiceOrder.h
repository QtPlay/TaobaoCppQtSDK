#ifndef SERVICEORDER_H
#define SERVICEORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 商城虚拟服务子订单数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ServiceOrder : public TaoDomain
{

public:
 virtual ~ServiceOrder() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  qlonglong getItemOid() const;
  void setItemOid (qlonglong itemOid);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getPayment() const;
  void setPayment (QString payment);
  QString getPicPath() const;
  void setPicPath (QString picPath);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getRefundId() const;
  void setRefundId (qlonglong refundId);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getServiceDetailUrl() const;
  void setServiceDetailUrl (QString serviceDetailUrl);
  qlonglong getServiceId() const;
  void setServiceId (qlonglong serviceId);
  QString getTitle() const;
  void setTitle (QString title);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  
  virtual void parseResponse();

private:
/**
 * @brief 卖家昵称
 **/
  QString buyerNick;

/**
 * @brief 服务所属的交易订单号。如果服务为一年包换，则item_oid这笔订单享受改服务的保护
 **/
  qlonglong itemOid;

/**
 * @brief 购买数量，取值范围为大于0的整数
 **/
  qlonglong num;

/**
 * @brief 虚拟服务子订单订单号
 **/
  qlonglong oid;

/**
 * @brief 子订单实付金额。精确到2位小数，单位:元。如:200.07，表示:200元7分。
 **/
  QString payment;

/**
 * @brief 服务图片地址
 **/
  QString picPath;

/**
 * @brief 服务价格，精确到小数点后两位：单位:元
 **/
  QString price;

/**
 * @brief 最近退款的id
 **/
  qlonglong refundId;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 服务详情的URL地址
 **/
  QString serviceDetailUrl;

/**
 * @brief 服务数字id
 **/
  qlonglong serviceId;

/**
 * @brief 商品名称
 **/
  QString title;

/**
 * @brief 服务子订单总费用
 **/
  QString totalFee;

};

#endif  /* SERVICEORDER_H */
