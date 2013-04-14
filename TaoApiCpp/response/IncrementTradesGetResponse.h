#ifndef INCREMENTTRADESGETRESPONSE_H
#define INCREMENTTRADESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/NotifyTrade.h>


/**
 * @brief TOP RESPONSE API: 开通主动通知业务的APP可以通过该接口获取用户的交易和评价变更通知信息 
<font color="red">建议在获取增量消息的时间间隔是：半个小时</font>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementTradesGetResponse : public TaoResponse
{
public:
 virtual ~IncrementTradesGetResponse() { }

  QList<NotifyTrade> getNotifyTrades() const;
  void setNotifyTrades (QList<NotifyTrade> notifyTrades);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取的交易通知消息体 ，具体字段见NotifyTrade数据结构
 **/
  QList<NotifyTrade> notifyTrades;

/**
 * @brief 搜索到符合条件的结果总数。
 **/
  qlonglong totalResults;

};

#endif
