#ifndef SHIPPING_H
#define SHIPPING_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>
#include <TaoApiCpp/domain/Location.h>


/**
 * @brief 物流数据结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Shipping : public TaoDomain
{

public:
 virtual ~Shipping() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QString getCompanyName() const;
  void setCompanyName (QString companyName);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getDeliveryEnd() const;
  void setDeliveryEnd (QDateTime deliveryEnd);
  QDateTime getDeliveryStart() const;
  void setDeliveryStart (QDateTime deliveryStart);
  QString getFreightPayer() const;
  void setFreightPayer (QString freightPayer);
  bool getIsQuickCodOrder() const;
  void setIsQuickCodOrder (bool isQuickCodOrder);
  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  QString getItemTitle() const;
  void setItemTitle (QString itemTitle);
  Location getLocation() const;
  void setLocation (Location location);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  QString getOutSid() const;
  void setOutSid (QString outSid);
  QString getReceiverMobile() const;
  void setReceiverMobile (QString receiverMobile);
  QString getReceiverName() const;
  void setReceiverName (QString receiverName);
  QString getReceiverPhone() const;
  void setReceiverPhone (QString receiverPhone);
  QString getSellerConfirm() const;
  void setSellerConfirm (QString sellerConfirm);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  QString getType() const;
  void setType (QString type);
  
  virtual void parseResponse();

private:
/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 物流公司名称
 **/
  QString companyName;

/**
 * @brief 运单创建时间
 **/
  QDateTime created;

/**
 * @brief 预约取货结束时间
 **/
  QDateTime deliveryEnd;

/**
 * @brief 预约取货开始时间
 **/
  QDateTime deliveryStart;

/**
 * @brief 谁承担运费.可选值:buyer(买家承担),seller(卖家承担运费).
 **/
  QString freightPayer;

/**
 * @brief 标示为是否快捷COD订单
 **/
  bool isQuickCodOrder;

/**
 * @brief 返回发货是否成功。
 **/
  bool isSuccess;

/**
 * @brief 货物名称
 **/
  QString itemTitle;

/**
 * @brief 收件人地址信息(在传输请求参数Fields字段时，必须使用“receiver_location”才能返回此字段)
 **/
  Location location;

/**
 * @brief 运单修改时间
 **/
  QDateTime modified;

/**
 * @brief 物流订单编号
 **/
  QString orderCode;

/**
 * @brief 运单号.具体一个物流公司的运单号码.
 **/
  QString outSid;

/**
 * @brief 收件人手机号码
 **/
  QString receiverMobile;

/**
 * @brief 收件人姓名
 **/
  QString receiverName;

/**
 * @brief 收件人电话
 **/
  QString receiverPhone;

/**
 * @brief 卖家是否确认发货.可选值:yes(是),no(否).
 **/
  QString sellerConfirm;

/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 物流订单状态,可选值:
CREATED(订单已创建) 
RECREATED(订单重新创建) 
CANCELLED(订单已取消) 
CLOSED(订单关闭) 
SENDING(等候发送给物流公司) 
ACCEPTING(已发送给物流公司,等待接单) 
ACCEPTED(物流公司已接单) 
REJECTED(物流公司不接单) 
PICK_UP(物流公司揽收成功) 
PICK_UP_FAILED(物流公司揽收失败) 
LOST(物流公司丢单) 
REJECTED_BY_RECEIVER(对方拒签) 
ACCEPTED_BY_RECEIVER(发货方式在线下单：对方已签收；自己联系：卖家已发货)
 **/
  QString status;

/**
 * @brief 交易ID
 **/
  qlonglong tid;

/**
 * @brief 物流方式.可选值:free(卖家包邮),post(平邮),express(快递),ems(EMS).
 **/
  QString type;

};

#endif  /* SHIPPING_H */
