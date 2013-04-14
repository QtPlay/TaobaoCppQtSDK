#ifndef PURCHASEORDER_H
#define PURCHASEORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Receiver.h>
#include <TaoApiCpp/domain/SubPurchaseOrder.h>


/**
 * @brief 采购单及子采购单信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PurchaseOrder : public TaoDomain
{

public:
 virtual ~PurchaseOrder() { }

  QString getAlipayNo() const;
  void setAlipayNo (QString alipayNo);
  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QString getBuyerPayment() const;
  void setBuyerPayment (QString buyerPayment);
  QDateTime getConsignTime() const;
  void setConsignTime (QDateTime consignTime);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDistributorFrom() const;
  void setDistributorFrom (QString distributorFrom);
  QString getDistributorPayment() const;
  void setDistributorPayment (QString distributorPayment);
  QString getDistributorUsername() const;
  void setDistributorUsername (QString distributorUsername);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  qlonglong getFenxiaoId() const;
  void setFenxiaoId (qlonglong fenxiaoId);
  qlonglong getId() const;
  void setId (qlonglong id);
  QList<QString> getIsvCustomKey() const;
  void setIsvCustomKey (QList<QString> isvCustomKey);
  QList<QString> getIsvCustomValue() const;
  void setIsvCustomValue (QList<QString> isvCustomValue);
  QString getLogisticsCompanyName() const;
  void setLogisticsCompanyName (QString logisticsCompanyName);
  QString getLogisticsId() const;
  void setLogisticsId (QString logisticsId);
  QString getMemo() const;
  void setMemo (QString memo);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  QString getPayType() const;
  void setPayType (QString payType);
  QString getPostFee() const;
  void setPostFee (QString postFee);
  Receiver getReceiver() const;
  void setReceiver (Receiver receiver);
  QString getShipping() const;
  void setShipping (QString shipping);
  QString getSnapshotUrl() const;
  void setSnapshotUrl (QString snapshotUrl);
  QString getStatus() const;
  void setStatus (QString status);
  QList<SubPurchaseOrder> getSubPurchaseOrders() const;
  void setSubPurchaseOrders (QList<SubPurchaseOrder> subPurchaseOrders);
  qlonglong getSupplierFlag() const;
  void setSupplierFlag (qlonglong supplierFlag);
  QString getSupplierFrom() const;
  void setSupplierFrom (QString supplierFrom);
  QString getSupplierMemo() const;
  void setSupplierMemo (QString supplierMemo);
  QString getSupplierUsername() const;
  void setSupplierUsername (QString supplierUsername);
  qlonglong getTcOrderId() const;
  void setTcOrderId (qlonglong tcOrderId);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  QString getTradeType() const;
  void setTradeType (QString tradeType);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝交易号。
 **/
  QString alipayNo;

/**
 * @brief 买家nick，供应商查询不会返回买家昵称，分销商查询才会返回。
 **/
  QString buyerNick;

/**
 * @brief 买家支付给分销商的总金额。注意买家购买的商品可能不是全部来自同一供货商，请同时参考子单上的相关金额。（精确到2位小数;单位:元。如:200.07，表示:200元7分）
 **/
  QString buyerPayment;

/**
 * @brief 物流发货时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime consignTime;

/**
 * @brief 采购单创建时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 分销商来源网站（taobao）。
 **/
  QString distributorFrom;

/**
 * @brief 分销商实付金额。(精确到2位小数;单位:元。如:200.07，表示:200元7分 )
 **/
  QString distributorPayment;

/**
 * @brief 分销商在来源网站的帐号名。
 **/
  QString distributorUsername;

/**
 * @brief 交易结束时间
 **/
  QDateTime endTime;

/**
 * @brief 分销流水号，分销平台产生的主键
 **/
  qlonglong fenxiaoId;

/**
 * @brief 供应商交易ID 非采购单ID，如果改发货状态 是需要该ID，ID在用户未付款前为0，付款后有具体值（发货时使用该ID）
 **/
  qlonglong id;

/**
 * @brief 自定义key
 **/
  QList<QString> isvCustomKey;

/**
 * @brief 自定义值
 **/
  QList<QString> isvCustomValue;

/**
 * @brief 物流公司
 **/
  QString logisticsCompanyName;

/**
 * @brief 运单号
 **/
  QString logisticsId;

/**
 * @brief 采购单留言。（代销模式下信息包括买家留言和分销商留言）
 **/
  QString memo;

/**
 * @brief 交易修改时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 付款时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime payTime;

/**
 * @brief 支付方式：ALIPAY_SURETY（支付宝担保交易）、ALIPAY_CHAIN（分账交易）、TRANSFER（线下转账）、PREPAY（预存款）、IMMEDIATELY（即时到账）、CASHGOODS（先款后货）
 **/
  QString payType;

/**
 * @brief 采购单邮费。(精确到2位小数;单位:元。如:200.07，表示:200元7分 )
 **/
  QString postFee;

/**
 * @brief 买家详细的信息。
 **/
  Receiver receiver;

/**
 * @brief 配送方式，FAST(快速)、EMS、ORDINARY(平邮)、SELLER(卖家包邮)
 **/
  QString shipping;

/**
 * @brief 订单快照URL
 **/
  QString snapshotUrl;

/**
 * @brief 采购单交易状态。可选值：<br>
WAIT_BUYER_PAY(等待付款)<br>
WAIT_SELLER_SEND_GOODS(已付款，待发货）<br>
WAIT_BUYER_CONFIRM_GOODS(已付款，已发货)<br>
TRADE_FINISHED(交易成功)<br>
TRADE_CLOSED(交易关闭)<br>
WAIT_BUYER_CONFIRM_GOODS_ACOUNTED(已付款（已分账），已发货。只对代销分账支持)<br>
WAIT_SELLER_SEND_GOODS_ACOUNTED(已付款（已分账），待发货。只对代销分账支持)
PAY_ACOUNTED_GOODS_CONFIRM （已分账发货成功）
 **/
  QString status;

/**
 * @brief 子订单的详细信息列表。
 **/
  QList<SubPurchaseOrder> subPurchaseOrders;

/**
 * @brief 返回供应商备注旗帜 
vlaue在1-5之间。非1-5之间，都采用1作为默认。 1:红色 2:黄色 3:绿色 4:蓝色 5:粉红色
 **/
  qlonglong supplierFlag;

/**
 * @brief 供应商来源网站, values: taobao, alibaba
 **/
  QString supplierFrom;

/**
 * @brief 供应商备注
 **/
  QString supplierMemo;

/**
 * @brief 供应商在来源网站的帐号名。
 **/
  QString supplierUsername;

/**
 * @brief 主订单ID （经销不显示）
 **/
  qlonglong tcOrderId;

/**
 * @brief 采购单总额（不含邮费,精确到2位小数;单位:元。如:200.07，表示:200元7分 )
 **/
  QString totalFee;

/**
 * @brief 分销方式：AGENT（代销）、DEALER（经销）
 **/
  QString tradeType;

};

#endif  /* PURCHASEORDER_H */
