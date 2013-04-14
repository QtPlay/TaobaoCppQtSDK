#ifndef HOTELORDER_H
#define HOTELORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/OrderGuest.h>


/**
 * @brief HotelOrder（酒店订单）结构。各字段详细说明可参考接口定义。注意：trade_status，refund_status，logistics_status不是严格准确的，请以交易API，物流API等得到的订单状态、物流状态为准确依据。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrder : public TaoDomain
{

public:
 virtual ~HotelOrder() { }

  QString getAlipayTradeNo() const;
  void setAlipayTradeNo (QString alipayTradeNo);
  QDateTime getArriveEarly() const;
  void setArriveEarly (QDateTime arriveEarly);
  QDateTime getArriveLate() const;
  void setArriveLate (QDateTime arriveLate);
  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  QDateTime getCheckinDate() const;
  void setCheckinDate (QDateTime checkinDate);
  QDateTime getCheckoutDate() const;
  void setCheckoutDate (QDateTime checkoutDate);
  QString getContactName() const;
  void setContactName (QString contactName);
  QString getContactPhone() const;
  void setContactPhone (QString contactPhone);
  QString getContactPhoneBak() const;
  void setContactPhoneBak (QString contactPhoneBak);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QDateTime getEndTime() const;
  void setEndTime (QDateTime endTime);
  qlonglong getGid() const;
  void setGid (qlonglong gid);
  QList<OrderGuest> getGuests() const;
  void setGuests (QList<OrderGuest> guests);
  qlonglong getHid() const;
  void setHid (qlonglong hid);
  QString getLogisticsStatus() const;
  void setLogisticsStatus (QString logisticsStatus);
  QString getMessage() const;
  void setMessage (QString message);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getNights() const;
  void setNights (qlonglong nights);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getOutOid() const;
  void setOutOid (QString outOid);
  QDateTime getPayTime() const;
  void setPayTime (QDateTime payTime);
  qlonglong getPayment() const;
  void setPayment (qlonglong payment);
  QString getRefundStatus() const;
  void setRefundStatus (QString refundStatus);
  qlonglong getRid() const;
  void setRid (qlonglong rid);
  qlonglong getRoomNumber() const;
  void setRoomNumber (qlonglong roomNumber);
  QString getSellerNick() const;
  void setSellerNick (QString sellerNick);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  qlonglong getTotalRoomPrice() const;
  void setTotalRoomPrice (qlonglong totalRoomPrice);
  QString getTradeStatus() const;
  void setTradeStatus (QString tradeStatus);
  QString getType() const;
  void setType (QString type);
  
  virtual void parseResponse();

private:
/**
 * @brief 支付宝交易号，22位字符
 **/
  QString alipayTradeNo;

/**
 * @brief 买家最早到达时间
 **/
  QDateTime arriveEarly;

/**
 * @brief 买家最晚到达时间
 **/
  QDateTime arriveLate;

/**
 * @brief 买家淘宝账号
 **/
  QString buyerNick;

/**
 * @brief 入住时间
 **/
  QDateTime checkinDate;

/**
 * @brief 离店时间
 **/
  QDateTime checkoutDate;

/**
 * @brief 联系人姓名
 **/
  QString contactName;

/**
 * @brief 联系人电话
 **/
  QString contactPhone;

/**
 * @brief 备用联系人电话
 **/
  QString contactPhoneBak;

/**
 * @brief 订单创建时间
 **/
  QDateTime created;

/**
 * @brief 结束时间
 **/
  QDateTime endTime;

/**
 * @brief 商品id
 **/
  qlonglong gid;

/**
 * @brief 入住人信息
 **/
  QList<OrderGuest> guests;

/**
 * @brief 酒店id
 **/
  qlonglong hid;

/**
 * @brief 物流状态。STATUS_UNCONSIGNED：未发货 -> 等待卖家发货。STATUS_CONSIGNED：已发货 -> 等待买家确认收货。STATUS_DELIVERED：已收货 -> 交易成功。STATUS_REVERT：已经退货 -> 交易失败。STATUS_DELIVERED_PART：部分发货 -> 交易成功。STATUS_NO_OUT_ORDER：还未创建物流订单
 **/
  QString logisticsStatus;

/**
 * @brief 买家留言
 **/
  QString message;

/**
 * @brief 订单修改时间
 **/
  QDateTime modified;

/**
 * @brief 天数
 **/
  qlonglong nights;

/**
 * @brief 酒店订单id
 **/
  qlonglong oid;

/**
 * @brief 合作方订单号,最长250个字符
 **/
  QString outOid;

/**
 * @brief 付款时间
 **/
  QDateTime payTime;

/**
 * @brief 实付款（分）
 **/
  qlonglong payment;

/**
 * @brief 退款状态。STATUS_WAIT_SELLER_AGREE：买家已经申请退款，等待卖家同意。STATUS_WAIT_BUYER_RETURN_GOODS：卖家已经同意退款，等待买家退货。STATUS_WAIT_SELLER_CONFIRM_GOODS：买家已经退货，等待卖家确认收货。STATUS_CLOSED：退款关闭。STATUS_SUCCESS：退款成功->买家取消预定。STATUS_SELLER_REFUSE_BUYER：卖家拒绝退款。STATUS_WAIT_OUT_PAY_SYSTEM_REFUND：等待外部交易系统退款。STATUS_NO_REFUND：没有申请退款。STATUS_ACTIVE_REFUND：有活动退款。STATUS_END_REFUND：退款结束。
 **/
  QString refundStatus;

/**
 * @brief 房型id
 **/
  qlonglong rid;

/**
 * @brief 房间数
 **/
  qlonglong roomNumber;

/**
 * @brief 卖家淘宝账号
 **/
  QString sellerNick;

/**
 * @brief 淘宝订单id
 **/
  qlonglong tid;

/**
 * @brief 总房价（分）
 **/
  qlonglong totalRoomPrice;

/**
 * @brief 交易状态。WAIT_BUYER_PAY：未冻结/未付款 -> 等待买家付款。WAIT_SELLER_SEND_GOODS：已冻结/已付款 -> 等待卖家发货 -> 等待卖家确认。TRADE_CLOSED：已退款 -> 交易关闭。TRADE_FINISHED：已转交易 -> 交易成功。TRADE_NO_CREATE_PAY：没有创建支付宝交易。TRADE_CLOSED_BY_TAOBAO：交易被淘宝关闭->卖家关闭交易或卖家核实未入住。TRADE_SUCCESS：预定成功（等待卖家核实入住）
 **/
  QString tradeStatus;

/**
 * @brief 支付类型。A：全额支付。B：灵活支付－手续费。C：灵活支付－订金。D：灵活支付－手续费/间夜
 **/
  QString type;

};

#endif  /* HOTELORDER_H */
