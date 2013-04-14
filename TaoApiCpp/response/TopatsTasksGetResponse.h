#ifndef TOPATSTASKSGETRESPONSE_H
#define TOPATSTASKSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 用于获取指定时间段内的定时API任务信息。</br> 
条件：1）必须是本APPKEY创建的任务。</br> 
     2)起始时间不能早于3天前的当前时刻。</br> 
     3）结束时间不能晚于一天以后的当前时刻。</br>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsTasksGetResponse : public TaoResponse
{
public:
 virtual ~TopatsTasksGetResponse() { }

  QList<Task> getTasks() const;
  void setTasks (QList<Task> tasks);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 符合查询条件内的定时任务的结果集
 **/
  QList<Task> tasks;

};

#endif
