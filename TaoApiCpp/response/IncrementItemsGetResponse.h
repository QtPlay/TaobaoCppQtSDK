#ifndef INCREMENTITEMSGETRESPONSE_H
#define INCREMENTITEMSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/NotifyItem.h>


/**
 * @brief TOP RESPONSE API: 开通主动通知业务的APP可以通过该接口获取商品变更通知信息 
<font color="red">建议获取增量消息的时间间隔是：半个小时</font>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementItemsGetResponse : public TaoResponse
{
public:
 virtual ~IncrementItemsGetResponse() { }

  QList<NotifyItem> getNotifyItems() const;
  void setNotifyItems (QList<NotifyItem> notifyItems);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 
 **/
  QList<NotifyItem> notifyItems;

/**
 * @brief 搜索到符合条件的结果总数。
 **/
  qlonglong totalResults;

};

#endif
