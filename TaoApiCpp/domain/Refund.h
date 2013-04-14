#ifndef REFUND_H
#define REFUND_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/RefundRemindTimeout.h>


/**
 * @brief 退款结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Refund : public TaoDomain
{

public:
 virtual ~Refund() { }

  QString getAddress() const;
  void setAddress (QString address);
  qlonglong getAdvanceStatus() const;
  void setAdvanceStatus (qlonglong advanceStatus);
  QString getAlipayNo() const;
  void setAlipayNo (QString alipayNo);
  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QString getCompanyName() const;
  void setCompanyName (QString companyName);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getCsStatus() const;
  void setCsStatus (qlonglong csStatus);
  QString getDesc() const;
  void setDesc (QString desc);
  QDateTime getGoodReturnTime() const;
  void setGoodReturnTime (QDateTime goodReturnTime);
  QString getGoodStatus() const;
  void setGoodStatus (QString goodStatus);
  bool getHasGoodReturn() const;
  void setHasGoodReturn (bool hasGoodReturn);
  QString getIid() const;
  void setIid (QString iid);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getNum() const;
  void setNum (qlonglong num);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);
  QString getPayment() const;
  void setPayment (QString payment);
  QString getPrice() const;
  void setPrice (QString price);
  QString getReason() const;
  void setReason (QString reason);
  QString getRefundFee() const;
  void setRefundFee (QString refundFee);
  qlonglong getRefundId() const;
  void setRefundId (qlonglong refundId);
  RefundRemindTimeout getRefundRemindTimeout() const;
  void setRefundRemindTimeout (RefundRemindTimeout refundRemindTimeout);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getShippingType() const;
  void setShippingType (QString shippingType);
  QString getSid() const;
  void setSid (QString sid);
  QString getSplitSellerFee() const;
  void setSplitSellerFee (QString splitSellerFee);
  QString getSplitTaobaoFee() const;
  void setSplitTaobaoFee (QString splitTaobaoFee);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  QString getTitle() const;
  void setTitle (QString title);
  QString getTotalFee() const;
  void setTotalFee (QString totalFee);
  
  virtual void parseResponse();

private:
/**
 * @brief 卖家收货地址
 **/
  QString address;

/**
 * @brief 退款先行垫付默认的未申请状态 0; 
退款先行垫付申请中  1; 
退款先行垫付，垫付完成 2; 
退款先行垫付，卖家拒绝收货 3; 
退款先行垫付，垫付关闭 4; 
退款先行垫付，垫付分账成功 5;
 **/
  qlonglong advanceStatus;

/**
 * @brief 支付宝交易号
 **/
  QString alipayNo;

/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 物流公司名称
 **/
  QString companyName;

/**
 * @brief 退款申请时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 不需客服介入1; 
需要客服介入2; 
客服已经介入3; 
客服初审完成 4; 
客服主管复审失败5; 
客服处理完成6;
 **/
  qlonglong csStatus;

/**
 * @brief 退款说明
 **/
  QString desc;

/**
 * @brief 退货时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime goodReturnTime;

/**
 * @brief 货物状态。可选值 
BUYER_NOT_RECEIVED (买家未收到货)  
BUYER_RECEIVED (买家已收到货)  
BUYER_RETURNED_GOODS (买家已退货)
 **/
  QString goodStatus;

/**
 * @brief 买家是否需要退货。可选值:true(是),false(否)
 **/
  bool hasGoodReturn;

/**
 * @brief 申请退款的商品字符串编号(注意：iid近期即将废弃，请用num_iid参数)
 **/
  QString iid;

/**
 * @brief 更新时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime modified;

/**
 * @brief 商品购买数量
 **/
  qlonglong num;

/**
 * @brief 申请退款的商品数字编号
 **/
  qlonglong numIid;

/**
 * @brief 子订单号。如果是单笔交易oid会等于tid
 **/
  qlonglong oid;

/**
 * @brief 退款对应的订单交易状态。 
可选值 
TRADE_NO_CREATE_PAY(没有创建支付宝交易)  
WAIT_BUYER_PAY(等待买家付款)  
WAIT_SELLER_SEND_GOODS(等待卖家发货,即:买家已付款)  
WAIT_BUYER_CONFIRM_GOODS(等待买家确认收货,即:卖家已发货)  
TRADE_BUYER_SIGNED(买家已签收,货到付款专用)  
TRADE_FINISHED(交易成功)  
TRADE_CLOSED(交易关闭)  
TRADE_CLOSED_BY_TAOBAO(交易被淘宝关闭)  
ALL_WAIT_PAY(包含：WAIT_BUYER_PAY、TRADE_NO_CREATE_PAY)  
ALL_CLOSED(包含：TRADE_CLOSED、TRADE_CLOSED_BY_TAOBAO)  
取自"http://open.taobao.com/dev/index.php/%E4%BA%A4%E6%98%93%E7%8A%B6%E6%80%81"
 **/
  QString orderStatus;

/**
 * @brief 支付给卖家的金额(交易总金额-退还给买家的金额)。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString payment;

/**
 * @brief 商品价格。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString price;

/**
 * @brief 退款原因
 **/
  QString reason;

/**
 * @brief 退还金额(退还给买家的金额)。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString refundFee;

/**
 * @brief 退款单号
 **/
  qlonglong refundId;

/**
 * @brief 退款超时结构RefundRemindTimeout
 **/
  RefundRemindTimeout refundRemindTimeout;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 物流方式.可选值:free(卖家包邮),post(平邮),express(快递),ems(EMS).
 **/
  QString shippingType;

/**
 * @brief 退货运单号
 **/
  QString sid;

/**
 * @brief 分账给卖家的钱
 **/
  QString splitSellerFee;

/**
 * @brief 分账给淘宝的钱
 **/
  QString splitTaobaoFee;

/**
 * @brief 退款状态。 
可选值 
WAIT_SELLER_AGREE(买家已经申请退款，等待卖家同意)  
WAIT_BUYER_RETURN_GOODS(卖家已经同意退款，等待买家退货)  
WAIT_SELLER_CONFIRM_GOODS(买家已经退货，等待卖家确认收货)  
SELLER_REFUSE_BUYER(卖家拒绝退款)  
CLOSED(退款关闭)  
SUCCESS(退款成功)
 **/
  QString status;

/**
 * @brief 淘宝交易单号
 **/
  qlonglong tid;

/**
 * @brief 商品标题
 **/
  QString title;

/**
 * @brief 交易总金额。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString totalFee;

};

#endif  /* REFUND_H */
