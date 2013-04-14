#ifndef WLBMESSAGE_H
#define WLBMESSAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 通道消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbMessage : public TaoDomain
{

public:
 virtual ~WlbMessage() { }

  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getMsgCode() const;
  void setMsgCode (QString msgCode);
  QString getMsgContent() const;
  void setMsgContent (QString msgContent);
  QString getMsgDescription() const;
  void setMsgDescription (QString msgDescription);
  QString getStatus() const;
  void setStatus (QString status);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 创建时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 消息通道ID
 **/
  qlonglong id;

/**
 * @brief 通知消息编码： STOCK_IN_NOT_CONSISTENT---入库单不一致 CANCEL_ORDER_SUCCESS---取消订单成功 CANCEL_ORDER_FAILURE---取消订单失败 INVENTORY_CHECK---盘点   INVENTORY_CHECK---盘点消息  ORDER_REJECT--wms拒单  ORDER_CONFIRMED--订单处理成功 WMS_FAILED--wms处理失败
 **/
  QString msgCode;

/**
 * @brief 通知内容：msg_code为STOCK_IN_NOT_CONSISTENT时,msg_content为:orderCode:code;orderItemId:111;itemId:123;planQuantity:10;relQuantity:6; 
msg_code为CANCEL_ORDER_SUCCESS及其它时,msg_content为：orderCode:code;
msg_code为CANCEL_ORDER_SUCCESS及其它时,msg_content为：orderCode:code; msg_code为INVENTORY_CHECK时，msg_content为orderCode:code;
 **/
  QString msgContent;

/**
 * @brief 消息描述
 **/
  QString msgDescription;

/**
 * @brief 消息状态： 不需要确认：NO_NEED_CONFIRM 已确认：CONFIRMED 待确认：TO_BE_CONFIRM
 **/
  QString status;

/**
 * @brief 用户ID
 **/
  qlonglong userId;

};

#endif  /* WLBMESSAGE_H */
