#ifndef NOTIFYREFUND_H
#define NOTIFYREFUND_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 退款通知消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class NotifyRefund : public TaoDomain
{

public:
 virtual ~NotifyRefund() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getRefundFee() const;
  void setRefundFee (QString refundFee);
  qlonglong getRid() const;
  void setRid (qlonglong rid);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 商品修改时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime modified;

/**
 * @brief 消息所属的用户昵称
 **/
  QString nick;

/**
 * @brief 子订单退款交易编号
 **/
  qlonglong oid;

/**
 * @brief 退款金额
 **/
  QString refundFee;

/**
 * @brief 退款编号
 **/
  qlonglong rid;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 退款操作所对应的退款增量消息状态  
可选值：  
RefundSuccess（退款成功）  
RefundClosed（退款关闭）  
RefundCreated（退款创建）  
RefundSellerAgreeAgreement（卖家同意退款协议）  
RefundSellerRefuseAgreement（卖家拒绝退款协议）  
RefundBuyerModifyAgreement（买家修改退款协议）  
RefundBuyerReturnGoods（买家退货给卖家）  
RefundCreateMessage（发表留言）  
RefundBlockMessage（屏蔽留言）  
RefundTimeoutRemind（退款超时提醒）
 **/
  QString status;

/**
 * @brief 父订单退款交易编号
 **/
  qlonglong tid;

/**
 * @brief 消息所属的用户编号
 **/
  qlonglong userId;

};

#endif  /* NOTIFYREFUND_H */
