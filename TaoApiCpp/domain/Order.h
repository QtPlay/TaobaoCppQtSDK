#ifndef ORDER_H
#define ORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 订单结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Order : public TaoDomain
{

public:
 virtual ~Order() { }

  QString getAdjustFee() const;
  void setAdjustFee (QString adjustFee);
  qlonglong getBindOid() const;
  void setBindOid (qlonglong bindOid);
  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  bool getBuyerRate() const;
  void setBuyerRate (bool buyerRate);
  qlonglong getCid() const;
  void setCid (qlonglong cid);
  QString getConsignTime() const;
  void setConsignTime (QString consignTime);
  QString getDiscountFee() const;
  void setDiscountFee (QString discountFee);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  QString getIid() const;
  void setIid (QString iid);
  QString getInvoiceNo() const;
  void setInvoiceNo (QString invoiceNo);
  bool getIsOversold() const;
  void setIsOversold (bool isOversold);
  bool getIsServiceOrder() const;
  void setIsServiceOrder (bool isServiceOrder);
  qlonglong getItemMealId() const;
  void setItemMealId (qlonglong itemMealId);
  QString getItemMealName() const;
  void setItemMealName (QString itemMealName);
  QString getLogisticsCompany() const;
  void setLogisticsCompany (QString logisticsCompany);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getOrderFrom() const;
  void setOrderFrom (QString orderFrom);
  QString getOuterIid() const;
  void setOuterIid (QString outerIid);
  QString getOuterSkuId() const;
  void setOuterSkuId (QString outerSkuId);
  QString getPayment() const;
  void setPayment (QString payment);
  QString getPicPath() const;
  void setPicPath (QString picPath);
  QString getPrice() const;
  void setPrice (QString price);
  qlonglong getRefundId() const;
  void setRefundId (qlonglong refundId);
  QString getRefundStatus() const;
  void setRefundStatus (QString refundStatus);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  bool getSellerRate() const;
  void setSellerRate (bool sellerRate);
  QString getSellerType() const;
  void setSellerType (QString sellerType);
  QString getShippingType() const;
  void setShippingType (QString shippingType);
  QString getSkuId() const;
  void setSkuId (QString skuId);
  QString getSkuPropertiesName() const;
  void setSkuPropertiesName (QString skuPropertiesName);
  QString getSnapshot() const;
  void setSnapshot (QString snapshot);
  QString getSnapshotUrl() const;
  void setSnapshotUrl (QString snapshotUrl);
  QString getStatus() const;
  void setStatus (QString status);
  QDateTime getTimeoutActionTime() const;
  void setTimeoutActionTime (QDateTime timeoutActionTime);
  QString getTitle() const;
  void setTitle (QString title);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  
  virtual void parseResponse();

private:
/**
 * @brief 手工调整金额.格式为:1.01;单位:元;精确到小数点后两位.
 **/
  QString adjustFee;

/**
 * @brief 捆绑的子订单号，表示该子订单要和捆绑的子订单一起发货，用于卖家子订单捆绑发货
 **/
  qlonglong bindOid;

/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 买家是否已评价。可选值：true(已评价)，false(未评价)
 **/
  bool buyerRate;

/**
 * @brief 交易商品对应的类目ID
 **/
  qlonglong cid;

/**
 * @brief 子订单发货时间，当卖家对订单进行了多次发货，子订单的发货时间和主订单的发货时间可能不一样了，那么就需要以子订单的时间为准。（没有进行多次发货的订单，主订单的发货时间和子订单的发货时间都一样）
 **/
  QString consignTime;

/**
 * @brief 订单优惠金额。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString discountFee;

/**
 * @brief 子订单的交易结束时间 
说明：子订单有单独的结束时间，与主订单的结束时间可能有所不同，在有退款发起的时候或者是主订单分阶段付款的时候，子订单的结束时间会早于主订单的结束时间，所以开放这个字段便于订单结束状态的判断
 **/
  QDateTime endTime;

/**
 * @brief 商品的字符串编号(注意：iid近期即将废弃，请用num_iid参数)
 **/
  QString iid;

/**
 * @brief 子订单所在包裹的运单号
 **/
  QString invoiceNo;

/**
 * @brief 是否超卖
 **/
  bool isOversold;

/**
 * @brief 是否是服务订单，是返回true，否返回false。
 **/
  bool isServiceOrder;

/**
 * @brief 套餐ID
 **/
  qlonglong itemMealId;

/**
 * @brief 套餐的值。如：M8原装电池:便携支架:M8专用座充:莫凡保护袋
 **/
  QString itemMealName;

/**
 * @brief 子订单发货的快递公司名称
 **/
  QString logisticsCompany;

/**
 * @brief 订单修改时间，目前只有taobao.trade.ordersku.update会返回此字段。
 **/
  QDateTime modified;

/**
 * @brief 购买数量。取值范围:大于零的整数
 **/
  qlonglong num;

/**
 * @brief 商品数字ID
 **/
  qlonglong numIid;

/**
 * @brief 子订单编号
 **/
  qlonglong oid;

/**
 * @brief 子订单来源,如jhs(聚划算)、taobao(淘宝)、wap(无线)
 **/
  QString orderFrom;

/**
 * @brief 商家外部编码(可与商家外部系统对接)。外部商家自己定义的商品Item的id，可以通过taobao.items.custom.get获取商品的Item的信息
 **/
  QString outerIid;

/**
 * @brief 外部网店自己定义的Sku编号
 **/
  QString outerSkuId;

/**
 * @brief 子订单实付金额。精确到2位小数，单位:元。如:200.07，表示:200元7分。计算公式如下：payment = price * num + adjust_fee - discount_fee + post_fee(邮费，单笔子订单时子订单实付金额包含邮费，多笔子订单时不包含邮费)；对于退款成功的子订单，由于主订单的优惠分摊金额，会造成该字段可能不为0.00元。建议使用退款前的实付金额减去退款单中的实际退款金额计算。
 **/
  QString payment;

/**
 * @brief 商品图片的绝对路径
 **/
  QString picPath;

/**
 * @brief 商品价格。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString price;

/**
 * @brief 最近退款ID
 **/
  qlonglong refundId;

/**
 * @brief 退款状态。退款状态。可选值 WAIT_SELLER_AGREE(买家已经申请退款，等待卖家同意) WAIT_BUYER_RETURN_GOODS(卖家已经同意退款，等待买家退货) WAIT_SELLER_CONFIRM_GOODS(买家已经退货，等待卖家确认收货) SELLER_REFUSE_BUYER(卖家拒绝退款) CLOSED(退款关闭) SUCCESS(退款成功)
 **/
  QString refundStatus;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 卖家是否已评价。可选值：true(已评价)，false(未评价)
 **/
  bool sellerRate;

/**
 * @brief 卖家类型，可选值为：B（商城商家），C（普通卖家）
 **/
  QString sellerType;

/**
 * @brief 子订单的运送方式（卖家对订单进行多次发货之后，一个主订单下的子订单的运送方式可能不同，用order.shipping_type来区分子订单的运送方式）
 **/
  QString shippingType;

/**
 * @brief 商品的最小库存单位Sku的id.可以通过taobao.item.sku.get获取详细的Sku信息
 **/
  QString skuId;

/**
 * @brief SKU的值。如：机身颜色:黑色;手机套餐:官方标配
 **/
  QString skuPropertiesName;

/**
 * @brief 订单快照详细信息
 **/
  QString snapshot;

/**
 * @brief 订单快照URL
 **/
  QString snapshotUrl;

/**
 * @brief 订单状态（请关注此状态，如果为TRADE_CLOSED_BY_TAOBAO状态，则不要对此订单进行发货，切记啊！）。可选值:  
<ul> 
<li>TRADE_NO_CREATE_PAY(没有创建支付宝交易)  
<li>WAIT_BUYER_PAY(等待买家付款)  
<li>WAIT_SELLER_SEND_GOODS(等待卖家发货,即:买家已付款)  
<li>WAIT_BUYER_CONFIRM_GOODS(等待买家确认收货,即:卖家已发货)  
<li>TRADE_BUYER_SIGNED(买家已签收,货到付款专用)  
<li>TRADE_FINISHED(交易成功)  
<li>TRADE_CLOSED(付款以后用户退款成功，交易自动关闭)  
<li>TRADE_CLOSED_BY_TAOBAO(付款以前，卖家或买家主动关闭交易)
 **/
  QString status;

/**
 * @brief 订单超时到期时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime timeoutActionTime;

/**
 * @brief 商品标题
 **/
  QString title;

/**
 * @brief 应付金额（商品价格 * 商品数量 + 手工调整金额 - 订单优惠金额）。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString totalFee;

};

#endif  /* ORDER_H */
