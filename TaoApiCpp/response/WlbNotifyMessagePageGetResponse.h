#ifndef WLBNOTIFYMESSAGEPAGEGETRESPONSE_H
#define WLBNOTIFYMESSAGEPAGEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbMessage.h>


/**
 * @brief TOP RESPONSE API: 物流宝提供的消息通知查询接口，消息内容包括;出入库单不一致消息，取消订单成功消息，盘点单消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbNotifyMessagePageGetResponse : public TaoResponse
{
public:
 virtual ~WlbNotifyMessagePageGetResponse() { }

  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);  QList<WlbMessage> getWlbMessages() const;
  void setWlbMessages (QList<WlbMessage> wlbMessages);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 条件查询结果总数量
 **/
  qlonglong totalCount;

/**
 * @brief 消息结果列表
 **/
  QList<WlbMessage> wlbMessages;

};

#endif
