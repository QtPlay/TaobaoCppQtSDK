#ifndef WLBNOTIFYMESSAGEPAGEGETREQUEST_H
#define WLBNOTIFYMESSAGEPAGEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbNotifyMessagePageGetResponse.h>

/**
 * TOP API: 物流宝提供的消息通知查询接口，消息内容包括;出入库单不一致消息，取消订单成功消息，盘点单消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbNotifyMessagePageGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getMsgCode() const
;  void setMsgCode (QString msgCode);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);

 QString getStatus() const
;  void setStatus (QString status);


  virtual WlbNotifyMessagePageGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询条件：记录截至时间
 **/
  QDateTime endDate;

/**
 * @brief 通知消息编码： 
STOCK_IN_NOT_CONSISTENT---入库单不一致 
CANCEL_ORDER_SUCCESS---取消订单成功 
INVENTORY_CHECK---盘点 
CANCEL_ORDER_FAILURE---取消订单失败 
ORDER_REJECT--wms拒单 
ORDER_CONFIRMED--订单处理成功
 **/
  QString msgCode;

/**
 * @brief 分页查询页数
 **/
  qlonglong pageNo;

/**
 * @brief 分页查询的每页页数
 **/
  qlonglong pageSize;

/**
 * @brief 查询条件：记录开始时间
 **/
  QDateTime startDate;

/**
 * @brief 消息状态： 
不需要确认：NO_NEED_CONFIRM 
已确认：CONFIRMED 
待确认：TO_BE_CONFIRM
 **/
  QString status;

};

#endif  /* WLBNOTIFYMESSAGEPAGEGETREQUEST_H */
