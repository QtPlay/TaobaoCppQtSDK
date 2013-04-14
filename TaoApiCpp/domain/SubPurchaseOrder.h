#ifndef SUBPURCHASEORDER_H
#define SUBPURCHASEORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 子采购单详细信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubPurchaseOrder : public TaoDomain
{

public:
 virtual ~SubPurchaseOrder() { }

  QString getAuctionPrice() const;
  void setAuctionPrice (QString auctionPrice);
  QString getBillFee() const;
  void setBillFee (QString billFee);
  QString getBuyerPayment() const;
  void setBuyerPayment (QString buyerPayment);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getDistributorPayment() const;
  void setDistributorPayment (QString distributorPayment);
  qlonglong getFenxiaoId() const;
  void setFenxiaoId (qlonglong fenxiaoId);
  qlonglong getId() const;
  void setId (qlonglong id);
  qlonglong getItemId() const;
  void setItemId (qlonglong itemId);
  QString getItemOuterId() const;
  void setItemOuterId (QString itemOuterId);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  QString getOldSkuProperties() const;
  void setOldSkuProperties (QString oldSkuProperties);
  QString getOrder200Status() const;
  void setOrder200Status (QString order200Status);
  QString getPrice() const;
  void setPrice (QString price);
  QString getRefundFee() const;
  void setRefundFee (QString refundFee);
  qlonglong getScItemId() const;
  void setScItemId (qlonglong scItemId);
  qlonglong getSkuId() const;
  void setSkuId (qlonglong skuId);
  QString getSkuOuterId() const;
  void setSkuOuterId (QString skuOuterId);
  QString getSkuProperties() const;
  void setSkuProperties (QString skuProperties);
  QString getSnapshotUrl() const;
  void setSnapshotUrl (QString snapshotUrl);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getTcOrderId() const;
  void setTcOrderId (qlonglong tcOrderId);
  QString getTitle() const;
  void setTitle (QString title);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  
  virtual void parseResponse();

private:
/**
 * @brief 分销商店铺中宝贝一口价
 **/
  QString auctionPrice;

/**
 * @brief 发票应开金额。根据买家实际付款去除邮费后，按各个子单(商品)金额比例进行分摊后的金额，仅供开发票时做票面金额参考。
 **/
  QString billFee;

/**
 * @brief 买家订单上对应的子单零售金额，除以num（数量）后等于最终宝贝的零售价格（精确到2位小数;单位:元。如:200.07，表示:200元7分）
 **/
  QString buyerPayment;

/**
 * @brief 创建时间。格式 yyyy-MM-dd HH:mm:ss 。
 **/
  QDateTime created;

/**
 * @brief 分销商实付金额=total_fee（分销商应付金额）+改价-优惠。（精确到2位小数;单位:元。如:200.07，表示:200元7分）
 **/
  QString distributorPayment;

/**
 * @brief 分销平台的子采购单主键
 **/
  qlonglong fenxiaoId;

/**
 * @brief 子采购单id，淘宝交易主键，采购单未付款时为0.（只有支付宝 即时到账付款才有这个id，其余付款形式该字段为0）
 **/
  qlonglong id;

/**
 * @brief 分销平台上的产品id，同FenxiaoProduct 的pid
 **/
  qlonglong itemId;

/**
 * @brief 分销平台上商品商家编码。
 **/
  QString itemOuterId;

/**
 * @brief 产品的采购数量。取值范围:大于零的整数
 **/
  qlonglong num;

/**
 * @brief 老的SKU属性值。如: 颜色:红色:别名;尺码:L:别名
 **/
  QString oldSkuProperties;

/**
 * @brief 代销采购单对应下游200订单状态。 
可选值： 
WAIT_SELLER_SEND_GOODS(已付款，待发货) 
WAIT_BUYER_CONFIRM_GOODS(已付款，已发货) 
TRADE_CLOSED(已退款成功) 
TRADE_REFUNDING(退款中) 
TRADE_FINISHED(交易成功) 
TRADE_CLOSED_BY_TAOBAO(交易关闭)
 **/
  QString order200Status;

/**
 * @brief 产品的采购价格。（精确到2位小数;单位:元。如:200.07，表示:200元7分）
 **/
  QString price;

/**
 * @brief 退款金额
 **/
  QString refundFee;

/**
 * @brief 后端商品id
 **/
  qlonglong scItemId;

/**
 * @brief 商品的SKU id。当存在时才会有值，建议使用sku_outer_id，sku_properties这两个值
 **/
  qlonglong skuId;

/**
 * @brief SKU商家编码。
 **/
  QString skuOuterId;

/**
 * @brief SKU属性值。如: 颜色:红色:别名;尺码:L:别名
 **/
  QString skuProperties;

/**
 * @brief 快照地址。
 **/
  QString snapshotUrl;

/**
 * @brief 交易状态。可选值：<br>
WAIT_BUYER_PAY(等待付款)<br>
WAIT_CONFIRM(付款信息待确认)<br>
WAIT_CONFIRM_WAIT_SEND_GOODS(付款信息待确认，待发货)<br>
WAIT_CONFIRM_SEND_GOODS(付款信息待确认，已发货)<br>
WAIT_CONFIRM_GOODS_CONFIRM(付款信息待确认，已收货)<br>
WAIT_SELLER_SEND_GOODS(已付款，待发货)<br>
WAIT_BUYER_CONFIRM_GOODS(已付款，已发货)<br>
WAIT_BUYER_CONFIRM_GOODS_ACOUNTED(已付款（已分账），已发货。只对代销分账支持)<br>
CONFIRM_WAIT_SEND_GOODS(付款信息已确认，待发货)<br>
CONFIRM_SEND_GOODS(付款信息已确认，已发货)<br>
TRADE_REFUNDED(已退款)<br>
TRADE_REFUNDING(退款中)<br>
TRADE_FINISHED(交易成功)<br>
TRADE_CLOSED(交易关闭)<br>
PAY_ACOUNTED_GOODS_CONFIRM （已分账发货成功）
 **/
  QString status;

/**
 * @brief TC订单ID（经销不显示）
 **/
  qlonglong tcOrderId;

/**
 * @brief 采购的产品标题。
 **/
  QString title;

/**
 * @brief 分销商应付金额=num(采购数量)*price(采购价)。（精确到2位小数;单位:元。如:200.07，表示:200元7分）
 **/
  QString totalFee;

};

#endif  /* SUBPURCHASEORDER_H */
