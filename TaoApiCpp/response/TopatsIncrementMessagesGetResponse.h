#ifndef TOPATSINCREMENTMESSAGESGETRESPONSE_H
#define TOPATSINCREMENTMESSAGESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 异步获取增量消息数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsIncrementMessagesGetResponse : public TaoResponse
{
public:
 virtual ~TopatsIncrementMessagesGetResponse() { }

  Task getTask() const;
  void setTask (Task task);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 创建任务信息。里面只包含task_id和created
 **/
  Task task;

};

#endif
