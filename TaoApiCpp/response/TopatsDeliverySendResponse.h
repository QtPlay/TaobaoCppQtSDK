#ifndef TOPATSDELIVERYSENDRESPONSE_H
#define TOPATSDELIVERYSENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Task.h>


/**
 * @brief TOP RESPONSE API: 提供异步批量物流发货功能。<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 一次最多发货40个订单<br/> 
2. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回结果<br/> 
3. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
4. 此任务的有效期为2天，超过2天后任务会被删除
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsDeliverySendResponse : public TaoResponse
{
public:
 virtual ~TopatsDeliverySendResponse() { }

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
