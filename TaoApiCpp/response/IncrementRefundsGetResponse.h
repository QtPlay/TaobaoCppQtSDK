#ifndef INCREMENTREFUNDSGETRESPONSE_H
#define INCREMENTREFUNDSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/NotifyRefund.h>


/**
 * @brief TOP RESPONSE API: 开通主动通知业务的APP可以通过该接口获取用户的退款变更通知信息 
<font color="red">建议在获取增量消息的时间间隔是：半个小时</font>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementRefundsGetResponse : public TaoResponse
{
public:
 virtual ~IncrementRefundsGetResponse() { }

  QList<NotifyRefund> getNotifyRefunds() const;
  void setNotifyRefunds (QList<NotifyRefund> notifyRefunds);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 获取的退款通知消息体 ，具体字段见NotifyRefund数据结构
 **/
  QList<NotifyRefund> notifyRefunds;

/**
 * @brief 搜索到符合条件的结果总数。
 **/
  qlonglong totalResults;

};

#endif
