#ifndef WANGWANGESERVICEAVGWAITTIMEGETRESPONSE_H
#define WANGWANGESERVICEAVGWAITTIMEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WaitingTimesOnDay.h>


/**
 * @brief TOP RESPONSE API: 根据客服ID和日期，获取该客服"当日接待的所有客户的平均等待时长"。  <br/> 
备注：  <br/> 
1、如果是操作者ID=被查者ID，返回被查者ID的"当日接待的所有客户的平均等待时长"。  <br/> 
2、如果操作者是组管理员，他可以查询他的组中的所有子帐号的"当日接待的所有客户的平均等待时长"。service_staff_id为所有子帐号，用 "," 隔开 <br/> 
3、如果操作者是主账户，他可以查询所有子帐号的"当日接待的所有客户的平均等待时长"。  service_staff_id为所有子帐号，用 "," 隔开<br/> 
 4、被查者ID可以是多个，用 "," 隔开，id数不能超过30。  <br/> 
 5、开始时间与结束时间之间的间隔不能超过7天  <br/> 
 6、不能查询90天以前的数据  <br/> 
 7、不能查询当天的记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceAvgwaittimeGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceAvgwaittimeGetResponse() { }

  QList<WaitingTimesOnDay> getWaitingTimeListOnDays() const;
  void setWaitingTimeListOnDays (QList<WaitingTimesOnDay> waitingTimeListOnDays);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 平均等待时长
 **/
  QList<WaitingTimesOnDay> waitingTimeListOnDays;

};

#endif
