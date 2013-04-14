#ifndef TOPATSTASKSGETREQUEST_H
#define TOPATSTASKSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsTasksGetResponse.h>

/**
 * TOP API: 用于获取指定时间段内的定时API任务信息。</br> 
条件：1）必须是本APPKEY创建的任务。</br> 
     2)起始时间不能早于3天前的当前时刻。</br> 
     3）结束时间不能晚于一天以后的当前时刻。</br>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTasksGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);


  virtual TopatsTasksGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要查询的已经创建的定时任务的结束时间(这里的时间是指执行时间)。
 **/
  QDateTime endTime;

/**
 * @brief 要查询的已创建过的定时任务的开始时间(这里的时间是指执行时间)。
 **/
  QDateTime startTime;

};

#endif  /* TOPATSTASKSGETREQUEST_H */
